#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>>&adj,int u,int v)
{
    adj[u][v] =1;
}

void removeEdge(vector<vector<int>>&adj,int u,int v)
{
    adj[u][v] =0;
}

void addVertex(vector<vector<int>>&adj)
{
    int size= adj.size();
    for(int i = 0; i<size;i++)
    {
        adj[i].push_back(0);
    }
    adj.push_back(vector<int>(size,0));
}

void removeVertex(vector<vector<int>>&adj,int u)
{
    adj.erase(adj.begin()+u);
}


void printGraph(vector<vector<int>>&adj)
{
    int size=adj.size();
    string row = " " ;
    for(int i=0;i<size; i ++)
    {
        row+=" " + to_string(i+);
    }
    cout << row << endl;
    for(int i= 0; i < size; i ++)
    {
        cout << i << " ";
        for(int y =0 ; y<size; y++)
        {
            cout<<adj[i][y]<<" ";
        }
        cout << endl;
    }
}


int getIndegree(vector<vector<int>>&adj)
{

    return 0;
}

int getOutdegree(vector<vector<int>>&adj)
{

    return 0;
}


int main()
{
    string type;
    int size;
    cin>>type >> size;
    vector<vector<int>> adj(size,vector<int>(size,0));
    while(1)
    {
        string command;
        int u ,v;
        cin>>command >> u>>v;
        if(command == "e")
        {
            addEdge(adj,u,v);
        }
        else if(command =="r")
        {
            removeEdge(adj,u,v);
        }
        else if(command =="v")
        {
            addVertex(adj);
        }
        else if(command =="u")
        {
            removeVertex(adj,u);
        }
        else if(command == "p")
        {
            printGraph(adj);
        }
        else if(command == "q")
        {
            int inDegree = getIndegree(adj);
            int outDegree = getOutdegree(adj);
            cout<<inDegree <<" ", outDegree;
            break;
        }
    }

}