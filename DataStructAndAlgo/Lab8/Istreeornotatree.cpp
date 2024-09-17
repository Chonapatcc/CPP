#include <bits/stdc++.h>
using namespace std;

vector<set<int>> adj;
set<vector<int>> visitedPaths;

bool uniqueCycle(const vector<int> path)
{

    vector<int> sortedPath = path;
    sort(sortedPath.begin(), sortedPath.end());

    if (visitedPaths.find(sortedPath) != visitedPaths.end()) 
    {
        return false;
    }

    visitedPaths.insert(sortedPath);
    return true;
}

bool cycleExist(vector<int>&path , int node)
{

  return find(path.begin(), path.end(),node) != path.end();
}

bool isTree = true;

void DFS(int node,vector<int>path) 
{
  if(cycleExist(path,node))
  {
    if(path.size()>=3 && uniqueCycle(path))
    {
      int beforeLastElement = *(++path.rbegin());
      if(node == beforeLastElement)
      {
        return ;
      }
      isTree = false;
      cout << "Cycle exists with vertex ";
      for(int it:path)
      {
        cout<<it<<" ";
        
      }
      cout<<endl;
    }
    return;
  }
  else
  {
    path.push_back(node);
    for(int child:adj[node])
    {
      DFS(child,path);
    }
  }
}

int main() {
  int V, E;
  cin >> V >> E;

  adj = vector<set<int>>(V + 1, set<int>());

  for (int i = 0; i < E; i++) 
  {
      int u, v;
      cin >> u >> v;
      adj[u].insert(v);
      adj[v].insert(u);
  }

  vector<int> path;
  // vector<int> visitedNode(V, false);
  DFS(1,path);

  if(isTree)
  {
    cout <<"Is a tree" <<endl;
  }
  else
  {
    cout << "Is not a tree" <<endl;
  }

  return 0;
}