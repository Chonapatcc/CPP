#include <iostream>
#include <string>
#include <random>
#include <vector>
#include <unordered_map>
using namespace std;

struct Node {
    string name;
    string address;
    int shuffledIndex;  // เก็บลำดับหลังการสุ่ม
    Node* left;
    Node* right;
    Node(string name, string address, int index) 
        : name(name), address(address), shuffledIndex(index), left(nullptr), right(nullptr) {}
};

class BST {
public:
    Node* root = nullptr;

    void insert(string name, string address, int index) {
        root = insertRec(root, name, address, index);
    }

    Node* insertRec(Node* node, string name, string address, int index) {
        if (node == nullptr) return new Node(name, address, index);
        if (name < node->name) node->left = insertRec(node->left, name, address, index);
        else if (name > node->name) node->right = insertRec(node->right, name, address, index);
        return node;
    }

    string search(string name) {
        Node* result = searchRec(root, name);
        if (result == nullptr) return "Contact not found.";
        return result->address;
    }

    Node* searchRec(Node* node, string name) {
        if (node == nullptr || node->name == name) return node;
        if (name < node->name) return searchRec(node->left, name);
        return searchRec(node->right, name);
    }

    void remove(string name) {
        root = removeRec(root, name);
    }

    Node* removeRec(Node* node, string name) {
        if (node == nullptr) return node;
        if (name < node->name) node->left = removeRec(node->left, name);
        else if (name > node->name) node->right = removeRec(node->right, name);
        else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = minValueNode(node->right);
            node->name = temp->name;
            node->address = temp->address;
            node->shuffledIndex = temp->shuffledIndex;
            node->right = removeRec(node->right, temp->name);
        }
        return node;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr) current = current->left;
        return current;
    }

    void inorderPrint() {
        vector<int> indices;
        inorderRec(root, indices);
        for (size_t i = 0; i < indices.size(); i++) {
            cout << indices[i];
            if (i < indices.size() - 1) cout << " ";
        }
        cout << endl;
    }

private:
    void inorderRec(Node* node, vector<int>& indices) {
        if (node != nullptr) {
            inorderRec(node->left, indices);
            indices.push_back(node->shuffledIndex);
            inorderRec(node->right, indices);
        }
    }
};

void shuffleInputData(vector<pair<string, string>>& inputData) {
    unsigned int fixedSeed = 42;
    default_random_engine rng(fixedSeed);
    for (int i = inputData.size() - 1; i > 0; --i) {
        uniform_int_distribution<int> dist(0, i);
        int j = dist(rng);
        swap(inputData[i], inputData[j]);
    }
}

int main() {
    BST tree;
    vector<pair<string, string>> inputData;
    
    string line;
    
    // อ่าน input
    while (getline(cin, line) && line != "-------------------------") {
        size_t spacePos = line.find(' ');
        string name = line.substr(0, spacePos);
        string address = line.substr(spacePos + 1);
        inputData.push_back({name, address});
    }

    // สร้าง vector เก็บข้อมูลก่อนสุ่ม
    vector<pair<string, string>> originalData = inputData;
    
    // สุ่มข้อมูล
    shuffleInputData(inputData);
    
    // สร้าง map เก็บตำแหน่งหลังการสุ่ม
    unordered_map<string, int> shuffledIndices;
    for (int i = 0; i < inputData.size(); i++) {
        shuffledIndices[inputData[i].first] = i;
    }
    
    // สร้าง BST ด้วยข้อมูลดั้งเดิม แต่ใช้ index จากการสุ่ม
    for (const auto& entry : originalData) {
        tree.insert(entry.first, entry.second, shuffledIndices[entry.first]);
    }

    // ประมวลผลคำสั่ง
    while (getline(cin, line)) {
        if (line == "-------------------------") break;
        
        char command = line[0];
        if (line.length() < 2) continue;
        
        string name = line.substr(2);
        
        if (command == 'F' || command == 'f') {
            cout << tree.search(name) << endl;
        }
        else if (command == 'D' || command == 'd') {
            if (tree.search(name) != "Contact not found.") {
                cout << "Deleting " << name << "..." << endl;
                tree.remove(name);
            } else {
                cout << "Contact not found." << endl;
            }
        }
        else if (command == 's') {
            cout << "ERROR!" << endl;
        }
        else {
            cout << "ERROR!" << endl;
        }
    }

    cout << "-------------------------" << endl;
    tree.inorderPrint();

    return 0;
}