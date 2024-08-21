#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int adj_vertex;
    struct Node* next;
    Node()
    {
        this->adj_vertex = 0;
        this->next = NULL;
    }
    Node(int adj_vertex)
    {
        this->adj_vertex = adj_vertex;
        this->next = NULL;
    }
};
typedef struct Node Node;

Node ** createGraph(int size)
{
    Node **adjMatrix = new Node*[size];
    for(int i = 0; i < size; i++)
    {
        adjMatrix[i] = NULL;
    }
    return adjMatrix;
}
void addEdge(Node **adjMatrix, int u, int v)
{
    Node * node = adjMatrix[u];
    if(node == NULL)
    {
        Node * newNode = new Node(v);
        adjMatrix[u] = newNode;
    }
    else
    {
        while(node->next != NULL)
            node = node->next;
        Node * newNode = new Node(v);
        node->next = newNode;
    }
}

void printGraph(Node **adjMatrix, int size)
{
    for(int i= 0; i< size; i++)
    {
        Node *node = adjMatrix[i];
        cout << i << " -> ";
        while(node != NULL)
        {
            cout << node->adj_vertex << " -> ";
            node = node->next;
        }
        cout << "NULL" << endl;
    }
}
int main()
{
    Node **adjMatrix = createGraph(5);
    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 3);
    addEdge(adjMatrix, 1, 4);
    addEdge(adjMatrix, 2, 0);
    addEdge(adjMatrix, 2, 3);
    addEdge(adjMatrix, 3, 4);
    printGraph(adjMatrix, 5);


}