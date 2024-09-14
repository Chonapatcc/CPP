#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <queue>

using namespace std;

struct Node {
    int data;

    Node* parent;
    vector<Node*> children;

    Node(int data)
    {
        this->data = data;
        this->parent = NULL;
        this->children = vector<Node*>();
    }
};

void burnTree(Node* node) {

    queue<Node*> q = queue<Node*>();
    unordered_map<Node*, bool> visited;

    q.push(node);
    visited[node] = true;
    cout<<node->data<<endl;

    queue<Node*> q2 = queue<Node*>();
    
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        
        Node *parent = current->parent;
        vector<Node*> children = current->children;

        if(parent != NULL)
        {
            if(visited.find(parent) == visited.end())
            {
                cout<<parent->data<<" ";
                visited[parent]=true;
                q2.push(parent);
            }
        }
        for(Node* child : children)
        {
            if(visited.find(child) == visited.end())
            {
                cout<<child->data<<" ";
                visited[child]=true;
                q2.push(child);
            }
        }
        if(q.empty() and !q2.empty())
        {
            cout<<endl;
            q = q2;
            q2 = queue<Node*>();
        }
    }
}

int main() {
    int n, r, p, c, t;
    cin >> n;

    unordered_map<int, Node*> nodes;

    cin >> r;
    nodes[r] = new Node(r);

    for (int i = 1; i <= n - 1; ++i) {
        cin >> p >> c;

        if (nodes.find(p) == nodes.end()) {
            nodes[p] = new Node(p);
        }

        if (nodes.find(c) == nodes.end()) {
            nodes[c] = new Node(c);
        }

        nodes[p]->children.push_back(nodes[c]);
        nodes[c]->parent = nodes[p];
    }


    cin >> t;
    if (nodes.find(t) == nodes.end()) {
        nodes[t] = new Node(t);
    }


    burnTree(nodes[t]);
    return 0;
}