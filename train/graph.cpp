#include <iostream>
#include <vector>
using namespace std;
#define NMAX 500

vector<int>* createGraph()
{
    return new vector<int>[NMAX];
}

vector<int>* createGraph(int n)
{
    // Return array of n lists (vectors)
    return new vector<int>[n];
}

void printGraph(vector<int>* adjList, int V)
{
    for (int v = 0; v < V; ++v)
    {
    cout << "[" << v << "] head ";
        for(int i=0; i < adjList[v].size(); i++)
            cout << "-> " << adjList[v].at(i);
    cout << "\n";
    }
}


void addEdge(vector<int>* adjList, int u, int v)
{
    adjList[u].push_back(v);
}

void removeEdge(vector<int>* adjList, int u, int v) {
    for(int i=0; i<adjList[u].size(); i++)
        if(adjList[u].at(i) == v) 
        {
            adjList[u].erase(adjList[u].begin()+i);
            return;
        }
}

void addVertex(int &n, int u)
{
    n = u+1;
}

void removeVertex(vector<int>* adjList,int &n, int u)
{
    if(u < n-1)
        return;

    for(int v=0; v<n; v++)
        removeEdge(adjList, v, u);
    adjList[u].clear();
    n--;
}

int inDegree(vector<int>* adjList, const int n, int u) {
    int count = 0;
    for(int v=0; v<n; v++)
        for(int i=0; i<adjList[v].size(); i++)
            if(adjList[v].at(i) == u)
                count++;
    return count;
}


int outDegree(vector<int>* adjList, int u) {
return adjList[u].size();
}


int main()
{
    int n = 5;

    vector<int>* adjList = createGraph(n);

    //Vertex numbers should be from 0 to 4.
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 3);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 1);
    addEdge(adjList, 2, 4);
    addEdge(adjList, 4, 3);
    removeVertex(adjList,n,4);
    printGraph(adjList, n);
    return 0;
}