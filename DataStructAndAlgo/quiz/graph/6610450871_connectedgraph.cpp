#include <bits/stdc++.h>
using namespace std;

void addNode(vector<vector<int>> &adj,int a,int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}


void bfs(vector<vector<int>> &adj,int start,vector<int> &visited)
{
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(auto it : adj[x])
        {
            if(visited[it] == 0)
            {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
}

void printVisited(vector<int> &visited)
{
    for(auto it : visited)
    {
        cout << it << " ";
    }
    cout <<endl;
}

bool checkAllVisited(vector<int> &visited)
{
    for(auto it : visited)
    {
        if(it == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int size =5 ;
    vector<vector<int>> adj(size,vector<int>());
    addNode(adj,0,1);
    addNode(adj,1,2);
    addNode(adj,2,3);
    addNode(adj,3,4);
    addNode(adj,4,0);

    vector<int> visited(size,0);
    bfs(adj,0,visited);
    printVisited(visited);
    if(checkAllVisited(visited))
    {
        cout << "All visited" <<endl;
    }
    else
    {
        cout << "Not all visited" <<endl;
    }
}