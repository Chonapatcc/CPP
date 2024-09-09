#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

const int MAXN = 50;

int V, E;
vector<vector<int>> adj(vector<int);
vector<int> path;
set<vector<int>> cycles; 
bool visited[MAXN];

void printTree()
{
    for(int i=1; i<=V; ++i)
    {
        cout << i << " : " ;
        for(int val: adj[i])
        {
            cout << val << " ";
        }
        cout <<endl;
    }
}

void findCycles(int u, int start) 
{
    visited[u] = true;
    path.push_back(u);

    for (int v : adj[u]) 
    {
        if ( && path.size() > 2) 
        { 
            cycles.insert(path); 
        } 
        else if (!visited[v]) 
        {
            findCycles(v, start);
        }
    }

    path.pop_back();
    visited[u] = false;
}

bool isTree() {
    for (int i = 1; i <= V; ++i) 
    {
        findCycles(i, i);
        if (!cycles.empty()) 
        {
            return false; 
        }
    }
    return true;
}

int main() {
    cin >> V >> E;

    for (int i = 0; i < E; ++i) 
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }   

    printTree();


    if (!isTree()) 
    {
        for (const vector<int>& cycle : cycles) 
        {
            string temp = "";
            for (int i=0 ; i< cycle.size(); ++i) 
            {
                int v = cycle[i];
                if(!visited[v])
                {
                    temp+= to_string(v) + " ";
                }
                if(i!=0)
                {
                    visited[v] = true;
                }
                
            }
            // if(temp!="1 " )
            // {
                cout << "Cycle exists with vertex ";
                cout << temp;
                cout << endl;
            // }
        }
        cout << "Is not a tree" << endl;
    } 
    else 
    {
        cout << "Is a tree" << endl;
    }

    return 0;
}