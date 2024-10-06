#include <bits/stdc++.h>
using namespace std;

#define NMAX 500
vector <int> *createGraph()
{
    return new vector<int>[NMAX];
}
void printGraph(vector<int> *adjList,int size)
{
    for(int i=0 ; i < size ; i++)
    {
        cout << "[" << i << "]head";
        for(int y=0 ;y<adjList[i].size();y++)
        {
            cout << "-> "<< adjList[i][y];
        }
        cout << endl;

    }
}
int main()
{
    cout << "cat" <<endl;
}