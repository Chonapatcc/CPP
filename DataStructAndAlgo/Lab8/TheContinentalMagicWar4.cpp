#include <bits/stdc++.h>
using namespace std;

unordered_map<int, struct Node*> cities;
vector<vector<int>> all_paths;
double max_wealth = -1;

struct PairHash {
    template <class T1, class T2>
    std::size_t operator()(const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ (h2 << 1);
    }
};

unordered_map<pair<int, int>, bool, PairHash> conquerable; 

struct Node
{
    int key;
    double army;
    double wealth;
    double lossRate;
    double gainRate;
    struct Node* parent;
    struct Node* leftChild;
    struct Node* rightSibling;
};

Node* createNode(int key,double army,double wealth,double lossRate,double gainRate)
{
    Node* node = new Node();
    node->key = key;
    node->parent = nullptr; 
    node->leftChild = nullptr;
    node->rightSibling = nullptr;
    node->army = army;
    node->wealth = wealth;
    node->lossRate = lossRate;
    node->gainRate = gainRate;
    return node;
}

void addChild(struct Node* parent,struct Node* newChild)
{
    if (!parent) return; 

    if (parent->leftChild) 
    {
        Node* child = parent->leftChild;
        while (child->rightSibling && child->rightSibling->key < newChild->key) {
            child = child->rightSibling;
        }
        newChild->rightSibling = child->rightSibling;
        child->rightSibling = newChild;
    } 
    else 
    {
        parent->leftChild = newChild;
    }
}

bool canConquer(double currentArmy, int cityKey, Node* enemyCity) {
    pair<int, int> key = {static_cast<int>(currentArmy), cityKey};
    if (conquerable.count(key)) {
        return conquerable[key];
    }
    bool result = currentArmy * (100 - enemyCity->lossRate) / 100 > enemyCity->army;
    conquerable[key] = result;
    return result;
}

void preorder(struct Node* node,vector<int> &path,double currentArmy, double currentWealth )
{
    
    if (!node) return;
    
    path.push_back(node->key);

    if (currentWealth > max_wealth) 
    {
        max_wealth = currentWealth;
        all_paths.clear();
        all_paths.push_back(path);
    } 
    else if (currentWealth == max_wealth) 
    {
        all_paths.push_back(path);
    }

    for (Node* child = node->leftChild; child; child = child->rightSibling) 
    {
        if (find(path.begin(), path.end(), child->key) == path.end() && 
            canConquer(currentArmy, child->key, child)) 
        {
            preorder(child, path, currentArmy * (100 - child->lossRate) / 100 + child->army * child->gainRate / 100, currentWealth + child->wealth);
        }
    }

    path.pop_back();

}



int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 

    double startArmy;
    int city;
    cin >> startArmy >> city;

    cities[0] = createNode(0,startArmy,0,0,0);

    for(int i=1;i<=city;i++)
    {
        double army,wealth,lossRate,gainRate;
        cin >> army >> wealth >> lossRate >> gainRate;
        cities[i] = createNode(i,army,wealth,lossRate,gainRate);
    }

    string line;
    int from, to;
    getline(cin, line);
    while(getline(cin, line) && line != "end") 
    {
        stringstream ss(line);
        ss >> to >> from;
        
        addChild(cities[from],cities[to]);
    }
    
    vector<int> path;
   
    preorder(cities[0],path,startArmy,0);

    for (const auto& p : all_paths) {
        cout << "Start";
        for (size_t i = 1; i < p.size(); ++i) { 
            cout << " -> " << p[i];
        }
        cout << " -> End" << endl;
    }

    return 0;
}