#include <iostream>
#include <sstream>
using namespace std;
class Node
{
public:
    string name;
    long long int value;
    Node *left;
    Node *right;
    Node()
    {
        name = "";
        value = 0;
        left = nullptr;
        right = nullptr;
    }
    Node(string name, double value)
    {
        this->name = name;
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};
void printNode(Node *node)
{
    int count = 0 ;
    while(node!=nullptr)
    {
        if(count>0)
        {
            cout<<" -> " ;
        }
        cout << node->name << " (" << node->value << ")";
        count++;
        node = node->right;
    }
    if(count>0)
    {
        cout<<" -> " ;
    }
    cout << "None";
    cout <<endl;
}
void connectNode(Node *node1, Node *node2)
{
    node1->right = node2;
    node2->left = node1;
}
void swap(Node *node1, Node *node2)
{
    string tempName = node1->name;
    long long int tempValue = node1->value;
    node1->name = node2->name;
    node1->value = node2->value;
    node2->name = tempName;
    node2->value = tempValue;
}
void sortNode(Node *node)
{
    Node *node1 = node;
    while(node1!=nullptr)
    {
        Node *node2 = node1->right;
        while(node2!=nullptr)
        {
            if(node1->value > node2->value)
            {
                swap(node1,node2);
            }
            node2 = node2->right;
        }
        node1 = node1->right;
    }
}
long long int getBondStrength(Node *node)
{
    long long int total =0 ;
    while(node!=nullptr)
    {
        total+=node->value;
        node = node->right;
    }
    return total;
}
int main()
{
    string text;
    Node *root = nullptr;
    Node *node = nullptr;
    while(getline(cin,text) and text!="end")
    {
        string name;
        long long int value;
        stringstream ss(text);
        ss >> name >> value;   
        Node *newNode = new Node(name,value);
        if(root == nullptr)
        {
            root = newNode;
            node = root;
        }
        else
        {
            connectNode(node,newNode);
            node = newNode;
        }
    }
    sortNode(root);
    cout <<"Polymer Chain:" <<endl;
    printNode(root);
    cout << "Total Bond Strength: ";
    long long int total = getBondStrength(root);
    cout << total;
    cout << " + x,";
    cout << endl;
    cout << "when x is total bond strength in each monomers"<<endl;
    cout << "connected bonds" <<endl;
    return 0;
}
