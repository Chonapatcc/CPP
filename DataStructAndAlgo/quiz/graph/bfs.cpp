#include <bits/stdc++.h>
using namespace std;

void bfs(vector<list<int>> &adj,int start,vector<bool> &visited)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(int it : adj[x])
        {
            if(!visited[it])
            {
                visited[it] = true;
                q.push(it);
            }
        }
    }
}

int main()
{
    vector<list<int>> adj(6,list<int>());
    // 1 visited and 5 visted = can;
    
    adj[1].push_back(2);
    adj[2].push_back(5);
    vector<bool> visited(6,false);
    bfs(adj,1,visited); // 1 can go to 5; = true;

    if(visited[1] and visited[5])
    {
        cout<<"true" <<endl;
    }
    else
    {
        cout<<"false" <<endl;
    }
    

    vector<list<int>> adj2(6,list<int>());
    // 1 visited and 5 visted = can;
    
    adj2[1].push_back(2);
    adj2[2].push_back(4);
    vector<bool> visited2(6,false);
    bfs(adj2,1,visited2); // 1 cant go to 5; = false

    if(visited2[1] and visited2[5])
    {
        cout<<"true" <<endl;
    }
    else
    {
        cout<<"false" <<endl;
    }


}