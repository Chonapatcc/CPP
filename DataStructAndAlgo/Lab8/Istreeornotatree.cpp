#include <bits/stdc++.h>
using namespace std;


void printPath(vector<int> &path)
{
    cout << "Cycle exists with vertex ";
    for(int i=0;i<path.size();i++)
    {
        cout<<path[i]<<" ";
    }
    cout<<endl;
}


void dfs(vector<set<int>> &adj,int node,vector<int> path,vector<bool> visited,bool &isTree)
{
    path.push_back(node);
    for(int x:adj[node])
    {
        if(!visited[x])
        {
            visited[x]=true;
            adj[x].erase(node);
            dfs(adj,x,path,visited,isTree);
        }
        else
        {
            printPath(path);
            isTree=false;
            return;
        }
    }
}

int main()
{
    int V,E;
    cin>>V>>E;
    vector<set<int>> adj(V+1,set<int>());
    for(int i=0;i<E;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    bool isTree=true;
    vector<int> path;
    for(int i=1;i<=V;i++)
    {
        vector<bool> visited(V+1,false);
        visited[i]=true;
        dfs(adj,i,path,visited,isTree);
    }
    
    if(isTree)
    {
        cout <<"Is a tree";
    }
    else
    {
        cout<<"Is not a tree";
    }
    
    
    return 0;

}