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
int main()
{
    string type;
    cin>>type;
    int size;
    cin>>size;
    if(type == "Matrix")
    {
        vector<vector<int>> adj(size,vector<int>(size,0));
        vector<int> lst(size,0);
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
                    adj[index1][index2] = 1;
                }
            }
            else if(command == 'r')
            {
                int a,b;
                cin>>a>>b;
                int index1 = findIndex(lst,a),index2 = findIndex(lst,b);
                if(index1!=-1 and index2!=-1)
                {
                    adj[index1][index2] = 0;
                }
            }
            else if(command == 'v')
            {
                lst.push_back(size);
                adj.push_back(vector<int>(size,0));
                size++;
                for(int i=0;i<size;i++)
                {
                    adj[i].push_back(0);
                }
            }
            else if(command == 'u')
            {
                int a;
                cin>>a;
                int index = findIndex(lst,a);
                if(index!=-1)
                {
                    lst.erase(lst.begin()+index);
                    for(int i=0;i<size;i++)
                    {
                        adj[i].erase(adj[i].begin()+index);
                    }
                    adj.erase(adj.begin()+index);
                }
                size --;
            }
            else if(command == 'p')
            {
                if(size>0)
                {
                    cout << " ";
                }
                for(int i=0 ; i<size; i++)
                {
                    cout << " "<< lst[i] ;
                }
                cout <<endl;
                for(int i=0;i<size;i++)
                {
                    cout << lst[i] << " ";
                    for(int y=0;y<size;y++)
                    {
                        cout<<adj[i][y]<<" ";
                    }
                    cout<<endl;
                }
                cout << string(20, '=') <<endl;
            }
            else if(command == 'q')
            {
                int maxIndegree = 0 ;
                int maxInName = -1;
                for(int i=0 ; i<size; i ++)
                {
                    int count =0;
                    for(int y=0 ;y<size;y++)
                    {
                        if(adj[y][i] == 1)
                        {
                            count++;
                        }
                    }
                    if(count > maxIndegree)
                    {
                        maxIndegree = count;
                        maxInName = lst[i];
                    }
                }

                int maxOutdegree = 0 ;
                int maxOutName = -1;
                for(int i=0 ; i<size; i ++)
                {
                    int count =0;
                    for(int y=0 ;y<size;y++)
                    {
                        if(adj[i][y] == 1)
                        {
                            count++;
                        }
                    }
                    if(count > maxOutdegree)
                    {
                        maxOutdegree = count;
                        maxOutName = lst[i];
                    }
                }

                cout << "Maximum In-Degree  : Vertex " << maxInName << " " << maxIndegree << endl;
                cout << "Maximum Out-Degree : Vertex " << maxOutName << " " << maxOutdegree << endl;
                break;
            }
        }
    }
    else if(type == "List")
    {
        vector<vector<int>> adj(size,vector<int>(0,0));
        vector<int> lst(size,0);
        for(int i=0 ; i<size; i++)
        {
            lst[i]=i;
        }
        char command;
        while(cin>>command)
        {
            if(command == 'e')
            {
                int a,b;
                cin>>a>>b;
                int index1 = findIndex(lst,a);
                if(index1!=-1)
                {
                    adj[index1].push_back(b);
                }
            }
            else if(command == 'r')
            {
                int a,b;
                cin>>a>>b;
                int index1 = findIndex(lst,a),index2 = findIndex(lst,b);
                if(index1!=-1 and index2!=-1)
                {
                    adj[index1].erase(adj[index1].begin()+ index2);
                }
            }
            else if(command == 'v')
            {
                lst.push_back(size);
                adj.push_back(vector<int>(0,0));
                size++;
            }
            else if(command == 'u')
            {
                int a;
                cin>>a;
                int index = findIndex(lst,a);
                if(index!=-1)
                {
                    lst.erase(lst.begin()+index);
                    adj.erase(adj.begin()+index);
                }
                size --;
            }
            else if(command == 'p')
            {
                for(int i=0 ; i<size; i++)
                {
                    cout << "[" << lst[i] << "]";
                    for(auto it = adj[i].begin(); it!=adj[i].end();it++)
                    {
                        cout << " -> " << *it;
                    }
                    cout << " -> NULL" << endl;
                }
                cout << string(20, '=') <<endl;
            }
            else if(command == 'q')
            {
                int maxIndegree = 0 ;
                int maxInName = -1;
                
                for(int i=0 ; i<size; i ++)
                {
                    int count =0;
                    for(int y=0 ;y<size;y++)
                    {
                        for(int z =0 ;z<adj[i].size() ;z++)
                        {
                            if(adj[y][z] == i)
                            {
                                count++;
                            }
                        }
                        
                    }
                    if(count > maxIndegree)
                    {
                        maxIndegree = count;
                        maxInName = lst[i];
                    }
                }

                int maxOutdegree = 0 ;
                int maxOutName = -1;
                for(int i=0 ; i<size; i ++)
                {
                    int count =adj[i].size();
                    if(count > maxOutdegree)
                    {
                        maxOutdegree = count;
                        maxOutName = lst[i];
                    }
                }
                cout << "Maximum In-Degree  : Vertex " << maxInName << " " << maxIndegree << endl;
                cout << "Maximum Out-Degree : Vertex " << maxOutName << " " << maxOutdegree << endl;
                break;
            }
        }
    }

}