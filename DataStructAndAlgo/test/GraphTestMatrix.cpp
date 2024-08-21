#include <bits/stdc++.h>
using namespace std;


int ** createGraph(int size)
{
    int **adjMatrix = new int*[size];
    for(int i = 0; i < size; i++)
    {
        adjMatrix[i] = new int[size];
        for(int y =0 ;y<size; y++)
            adjMatrix[i][y] = 0;
    }
    return adjMatrix;
}
void addEdge(int **adjMatrix, int u, int v)
{
    adjMatrix[u][v] = 1;
}

void printGraph(int **adjMatrix, int size)
{
    for(int i= 0; i< size; i++)
    {
        for(int y= 0 ; y<size ;y++)
            cout << adjMatrix[i][y] << " ";
        cout << endl;
    }

}
int main()
{
    int **adjMatrix = createGraph(5);
    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 3);
    addEdge(adjMatrix, 1, 4);
    addEdge(adjMatrix, 2, 0);
    addEdge(adjMatrix, 2, 3);
    addEdge(adjMatrix, 3, 4);
    printGraph(adjMatrix, 5);


}