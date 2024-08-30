#include <bits/stdc++.h>
using namespace std;
void printArr(vector<vector<int>> adj)
{
    int size= adj.size();
    for(int i =0 ; i<size ;i ++)
    {
        int size2 = adj[i].size();
        string tp = "";
        if(size2 >2)
        {
            tp = "Junction of";
        }
        else if(size2 ==2 )
        {
            tp ="Corner connecting";
        }
        else if(size2 == 1)
        {
            tp = "Impasse coming from";
        }
        else if(size2 == 0)
        {
            tp = "Isolated";
        }
        cout << "v" << i+1 << ": " << tp << " " ;

        for(int y=0 ; y<size2 ; y++)
        {
            cout << "e"<<adj[i][y]+1 << " ";
        }
        cout << endl;
    }
}
int main()
{
    int vertex ,edge ;
    cin>> vertex >> edge;
    
    vector<vector<int>> adj(vertex,vector<int>(0,0));
    // printArr(adj);
    for(int i=0 ; i < edge ; i++)
    {
        int v,u;
        cin>>v>>u;
        v-=1;
        u-=1;
        adj[v].push_back(i);
        adj[u].push_back(i);
    }

    
    printArr(adj);
    
}