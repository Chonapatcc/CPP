#include <bits/stdc++.h>
using namespace std;
int findIndex(vector<int> lst,int find)
{
    for(int i= 0 ; i<lst.size(); i++)
    {
        if(lst[i] == find)
        {
            return i;
        }
    }
    return -1;
}
int findMaxVal(vector<int> lst)
{
    int maxVal =0 ;
    for(int i= 0; i< lst.size(); i++)
    {
        if(lst[i]!=-1)
        {
            if(lst[i]>maxVal)
            {
                maxVal = lst[i];
            }
        }
    }
    return maxVal;
    
}
void printMatrix(vector<vector<int>> &adj,vector<int> &lst)
{
    cout << " ";
    for(int i=0 ; i<adj.size(); i++)
    {
        if(lst[i]!=-1)
        {
            cout << " " << lst[i];
        }
    }
    cout <<endl;
    for(int i=0;i<adj.size();i++)
    {
        if(lst[i] !=-1)
        {
            cout << lst[i] << " ";
            for(int y =0 ;y<adj[i].size();y++)
            {
                if(lst[y]!=-1)
                {
                    if(adj[i][y]!=-1)
                    {
                        cout << "1 ";
                    }
                    else
                    {
                        cout << "0 ";
                    }
                }
            }
            cout <<endl;
        }
    }

}
void printList(vector<vector<int>> &adj,vector<int> &lst)
{
    for(int i=0 ; i<adj.size(); i++)
    {
        if(lst[i]!=-1)
        {
            cout << "[" << lst[i] << "] -> ";
            for(int y =0 ; y<adj[i].size(); y++)
            {
                if(lst[y]!=-1)
                {
                    if(adj[i][y]!=-1)
                    {
                        cout << lst[y] << " -> ";
                    }
                }
            }
            cout << "NULL" << endl;
        }
    }
}
void getMaxInDegree(vector<vector<int>> &adj,vector<int> &lst)
{
    int maxIn = 0;
    int maxInName = 0;
    for(int i=0 ;i < adj.size(); i++)
    {
        int count=0;
        if(lst[i]!=-1)
        {
            for(int y =0 ;y<adj.size();y++)
            {
                if(lst[y]!=-1)
                {
                    if(adj[y][i]!=-1)
                    {
                        count++;
                    }
                }
            }
            if(count>maxIn)
            {
                maxIn = count;
                maxInName = lst[i];
            }

        }
    }
    cout << "Maximum In-Degree  : Vertex " << maxInName << " " << maxIn << endl;
}

void getMaxOutDegree(vector<vector<int>> &adj,vector<int> &lst)
{
    int maxOut = 0;
    int maxOutName = 0;
    for(int i=0 ;i < adj.size(); i++)
    {
        int count=0;
        if(lst[i]!=-1)
        {
            for(int y =0 ;y<adj.size();y++)
            {
                if(lst[y]!=-1)
                {
                    if(adj[i][y]!=-1)
                    {
                        count++;
                    }
                }
            }
            if(count>maxOut)
            {
                maxOut = count;
                maxOutName = lst[i];
            }

        }
    }
    cout << "Maximum Out-Degree : Vertex " << maxOutName << " " << maxOut << endl;
}
int main()
{
    string type;
    int size;
    cin>>type>>size;
    vector<vector<int>> adj(size,vector<int>(size,-1));
    vector<int> lst(size,-1);
    for(int i=0;i<size;i++)
    {
        lst[i] = i;
    }

    char command;
    while(cin>>command)
    {
        if(command == 'e')
        {
            int a,b;
            cin>>a>>b;
            int index1 = findIndex(lst,a),index2 = findIndex(lst,b);
            if(index1!=-1 and index2!=-1)
            {
                adj[index1][index2] = b;
            }
        }
        else if(command == 'r')
        {
            int a,b;
            cin>>a>>b;
            int index1 = findIndex(lst,a),index2 = findIndex(lst,b);
            if(index1!=-1 and index2!=-1)
            {
                adj[index1][index2] = -1;
            }
        }
        else if(command == 'v')
        {
            lst.push_back(size);
            adj.push_back(vector<int>(adj.size(),-1));
            size++;
            for(int i=0;i<lst.size();i++)
            {
                adj[i].push_back(-1);
            }
        }
        else if(command == 'u')
        {
            int a;
            cin>>a;
            int index = findIndex(lst,a);
            if(index!=-1)
            {
                lst[index] = -1;
                for(int i=0;i<size;i++)
                {
                    adj[i].at(index) = -1;
                }
            }
        }
        else if(command == 'p')
        {
            if(type == "Matrix")
            {
                printMatrix(adj,lst);
            }
            else if(type == "List")
            {
                printList(adj,lst);
            }
            cout << "====================" <<endl;
        }
        else if(command == 'q')
        {
            getMaxInDegree(adj,lst);
            getMaxOutDegree(adj,lst);
            break;
        }

    }
    

}