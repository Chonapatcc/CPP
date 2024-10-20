#include <bits/stdc++.h>
using namespace std;


vector<int>* createGraph(int n )
{
    return new vector<int>[n];
}


void printGraph(vector<int>* graph)
{
    int n = graph->size();
    for (int i = 0; i < n; i++) {
        cout << "Adjacency list of vertex " << i << "\n";
        cout << "head ";
        
        for (auto x : graph[i])
            cout << "->" << x;
        cout << "\n";
    }
}

int main()
{
    int n = 5; // Number of vertices
    vector<int>* graph = createGraph(n);
    printGraph(graph);
}