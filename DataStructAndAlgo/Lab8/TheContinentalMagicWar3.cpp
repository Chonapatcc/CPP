#include <bits/stdc++.h>
using namespace std;

unordered_map<int, struct Node*> cities;
vector<vector<int>> all_paths;
double max_wealth = -1;


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
    

    if(parent->leftChild != NULL) 
    {
        struct Node* child = parent->leftChild;
        while(child->rightSibling != NULL and child->rightSibling->key < newChild->key) 
        {
            child = child->rightSibling;
        }
        struct Node* temp = child->rightSibling;
        child->rightSibling = newChild;
        newChild->rightSibling = temp;
    }
    else 
    {
        parent->leftChild = newChild;
    }
}

bool canConquer(double currentArmy,double currentWealth, struct Node *enemyCity) 
{
    bool result = currentArmy * (100 - enemyCity->lossRate) / 100 > enemyCity->army;
    return result;
}

void preorder(struct Node* node,vector<int> &path,double currentArmy, double currentWealth )
{
    
    if(node == NULL)
    {
        return ;
    }
    
    path.push_back(node->key);

    if (currentWealth > max_wealth or max_wealth == -1) 
    {
        max_wealth = currentWealth;
        all_paths.clear();
        all_paths.push_back(path);
    } 
    else if (currentWealth == max_wealth) 
    {
        all_paths.push_back(path);
    }

    Node *child = node->leftChild;
    while(child != NULL)
    {
        if(find(path.begin(), path.end(), child->key) == path.end() && canConquer(currentArmy,currentWealth,child) )
        {
            preorder(child,path,currentArmy * (100 - child->lossRate) / 100 + child->army * child->gainRate / 100,currentWealth + child->wealth);
        }
        child = child->rightSibling;
    }

    path.pop_back();

}



int main()
{
    double startArmy;
    int city;
    cin >> startArmy >> city;

    struct Node* node1 = createNode(0,startArmy,0,0,0);
    cities[0] = node1;


    for(int i=1;i<=city;i++)
    {
        double army,wealth,lossRate,gainRate;
        cin >> army >> wealth >> lossRate >> gainRate;

        struct Node* newNode = createNode(i,army,wealth,lossRate,gainRate);
        cities[i] = newNode;
    }

    string line;
    int from, to;
    while(getline(cin, line)) 
    {
        if(line == "end")
        {
            break;
        }
        stringstream ss(line);
        ss >> to >> from;
        
        addChild(cities[from],cities[to]);
    }
    
    vector<int> path = vector<int>();
   
    preorder(cities[0],path,startArmy,0);

    for(auto p : all_paths)
    {
        cout << "Start";
        for (int i = 1; i <p.size(); ++i) {

            cout << " -> " << p[i];
        }
        cout << " -> End" << endl;
    }

    return 0;
}