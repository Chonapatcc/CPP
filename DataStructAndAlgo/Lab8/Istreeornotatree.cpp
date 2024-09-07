#include <bits/stdc++.h>
using namespace std;

void dfs(vector<set<int>> &adj, int node,set<int> s,vector<bool> &visited,bool &hasCycle)
{
    s.insert(node);
    visited[node]=true;
    
    int count =0 ;
    bool hasOne =0 ;
    for(auto val :adj[node])
    {
        if(val == 1)
        {
            hasOne =1;
        }
        if(val>node and visited[val]==false)
        {
            count++;
            dfs(adj,val,s,visited,hasCycle);
        }

    }
    
    if(count ==0 and hasOne and adj[node].size()!=1)
    {
        cout << "Cycle exists with vertex";
        for(auto val : s)
        {
            cout << " " << val;
        }
        cout << endl;
        hasCycle =1;
    }
}

void printGraph(vector<set<int>> &adj)
{
    for(int i = 0; i < adj.size(); i++)
    {
        cout<<i << ": ";
        for(auto val : adj[i])
        {
            cout << val << " ";
        }
        cout << endl;
    }
}
int main() {
    int V, E;
    cin >> V >> E;

    vector<set<int>> adj(V + 1);
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    // printGraph(adj);
    set<int> s;
    vector<bool> visited(V+1,false);
    bool hasCycle =0;
    dfs(adj,1,s,visited,hasCycle);

    if(hasCycle)
    {
        cout << "Is not a tree" << endl;
    }
    else
    {
        cout << "Is a tree" << endl;
    }


    return 0;
}
