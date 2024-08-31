#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> &adj)
{
    int size = adj.size();
    if(size>0)
    {
        cout << " ";
    }
    for(int i =0 ; i<size; i++)
    {
        if(adj[i][0] !=-1)
        {
            cout << " " <<adj[i][0];
        }
    }
    cout << endl;
    for(int i =0 ; i<size ;i ++)
    {
        if(adj[i][0] !=-1)
        {
            int size2 = adj[i].size();
            cout << adj[i][0] << " ";
            for(int y =1 ;y<size2 ;y++)
            {
                if(adj[i][y] !=-1)
                {
                    cout << "1 " ;
                }
                else
                {
                    cout << "0 ";
                }
            }
            cout <<endl;
        }
    }
    cout << "====================" <<endl;
}
void printList(vector<vector<int>> &adj)
{
    int size = adj.size();
    for (int i = 0; i < size; ++i) 
    {
        if(adj[i][0] !=-1)
        {
            cout << "[" << adj[i][0] << "] -> ";
            for (auto it = adj[i].begin()+1; it != adj[i].end(); ++it) 
            {
                if(*it != -1)
                {
                    cout << *it << " -> ";
                }
            }
            cout << "NULL" << endl;
        }
    }
    cout << "====================" <<endl;
}
void printInDegree(vector<vector<int>> &adj)
{
    int size = adj.size();
    int maxVal=-1;
    int maxName=-1;
    for(int i=0 ; i< size; ++i)
    {
        int count =0 ;

        for(int y =0 ; y<size ;y++)
        {
            if(adj[y][i+1]!=-1)
            {
                count++;
            }
        }
        if(count>maxVal)
        {
            maxVal = count;
            maxName = adj[i][0];
        }
    }
    cout << "Maximum In-Degree  : Vertex " << maxName << " " << maxVal << endl;
}

void printOutDegree(vector<vector<int>> &adj)
{
    int size = adj.size();
    int maxVal=-1;
    int maxName=-1;
    for(int i=0 ; i< size; ++i)
    {
        int count =0 ;

        for(int y =1 ; y<size+1 ;y++)
        {
            if(adj[i][y]!=-1)
            {
                count++;
            }
        }
        if(count>maxVal)
        {
            maxVal = count;
            maxName = adj[i][0];
        }
    }
    cout << "Maximum Out-Degree : Vertex " << maxName << " " << maxVal << endl;
}

int findIndex(vector<vector<int>> &adj, int find)
{
    for(int i=0 ; i<adj.size(); ++i)
    {
        if(adj[i][0] == find)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string type;
    cin >> type;
    int size;
    cin>>size;

    vector<vector<int>> adj(size,vector<int>(size,-1));
    for(int i=0 ; i<size ; ++i)
    {
        adj[i].insert(adj[i].begin(),i);
    }

    char command;
    while (cin >> command) 
    {
        if (command == 'e') 
        {
            int a,b;
            cin>>a>>b;
            int index1 = findIndex(adj,a),index2 = findIndex(adj,b);
            if(index1!=-1 and index2!=-1)
            {
                adj[index1][index2+1] = b;
            }
        } 
        else if (command == 'r') 
        {
            int a,b;
            cin>>a>>b;
            int index1 = findIndex(adj,a),index2 = findIndex(adj,b);
            if(index1!=-1 and index2!=-1)
            {
                adj[index1][index2+1] = -1;
            }
        } 
        else if (command == 'v') 
        {
            int maxVal=0;
            int size = adj.size();
            for(int i=0 ; i< size; ++i)
            {
                if(adj[i][0]>maxVal)
                {
                    maxVal = adj[i][0];
                }
            }
            adj.push_back(vector<int>(size,-1));
            for(int i= 0; i<size+1; ++i)
            {
                adj[i].push_back(-1);
            }

            adj[size].insert(adj[size].begin(),maxVal+1);
        } 
        else if (command == 'u') 
        {
            int a;
            cin>>a;
            int size = adj.size();
            
            for(int i=0 ; i<size ; ++i)
            {
                if(adj[i][0] == a)
                {   
                    for(int y=0 ;y<size;y++)
                    {
                        adj[y].erase(adj[y].begin()+a+1);
                    }
                    adj.erase(adj.begin()+i);
                    break;
                }
            }
        } 
        else if (command == 'p') 
        {
            if(type == "Matrix")
            {
                printMatrix(adj);

            }
            else if (type == "List")
            {
                printList(adj);
            }
        } 
        else if (command == 'q') 
        {
            printInDegree(adj);
            printOutDegree(adj);
            break;
        }
    }
}