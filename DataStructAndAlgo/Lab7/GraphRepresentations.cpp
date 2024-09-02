#include <iostream>
#include <vector>
#include <list>
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

int checkIsIn(vector<list<int>> adj,int find,int index)
{
    for(auto it = adj[index].begin(); it!=adj[index].end();it++)
    {
        if(*it == find)
        {
            return 1;
        }
    }
    return 0;
}
int findMaxVal(vector<int> lst)
{
    int m =-1 ;
    for(int i= 0; i< lst.size(); i++)
    {
        if(lst[i]!=-1)
        {
            if(lst[i]>m)
            {
                m = lst[i];
            }
        }
    }
    return m;
}
int main() {
    string type;
    cin >> type;
    int numVertices;
    cin >> numVertices;

    if(type == "Matrix")
    {
        vector<vector<int>> adjMatrix(numVertices, vector<int>(numVertices, 0));
        vector<int> lst(numVertices,-1);
        for(int i=0 ; i<numVertices; i++)
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
                    adjMatrix[index1][index2] = 1;
                }
            }
            else if(command == 'r')
            {
                int a,b;
                cin>>a>>b;
                int index1 = findIndex(lst,a),index2 = findIndex(lst,b);
                if(index1!=-1 and index2!=-1)
                {
                    adjMatrix[index1][index2] = 0;
                }
            }
            else if(command == 'v')
            {
                lst.push_back(findMaxVal(lst)+1);
                adjMatrix.push_back(vector<int>(numVertices,0));
                numVertices++;
                for(int i=0;i<numVertices;i++)
                {
                    adjMatrix[i].push_back(0);
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
                    for(int i=0;i<numVertices;i++)
                    {
                        adjMatrix[i].erase(adjMatrix[i].begin()+index);
                    }
                    adjMatrix.erase(adjMatrix.begin()+index);
                    numVertices --;
                }
            }
            else if(command == 'p')
            {
                if(numVertices<=0)
                {
                    cout << "====================" <<endl;
                    continue;
                }
                cout << " " ;
                for(int i= 0 ; i<numVertices; i++)
                {
                    cout << " " << lst[i];
                }
                cout <<endl;
                for(int i=0;i<numVertices;i++)
                {
                    cout << lst[i] << " ";
                    for(int y =0 ;y<numVertices;y++)
                    {
                        cout<<adjMatrix[i][y]<<" ";
                    }
                    cout<<endl;
                }
                cout << "====================" <<endl;
            }
            else if(command == 'q')
            {
                int maxIndegree = -1 ;
                int maxInName = -1;
                int maxOutdegree = -1 ;
                int maxOutName = -1;

                for(int i=0 ; i< numVertices; i ++)
                {
                    int count1 =0;
                    int count2 =0;
                    for(int y=0 ;y<numVertices;y++)
                    {
                        if(adjMatrix[y][i] == 1)
                        {
                            count1++;
                        }
                        if(adjMatrix[i][y] == 1)
                        {
                            count2++;
                        }
                    }
                    if(count1 > maxIndegree or maxIndegree == -1)
                    {
                        maxIndegree = count1;
                        maxInName = lst[i];
                    }
                    if(count2 > maxOutdegree or maxOutdegree == -1)
                    {
                        maxOutdegree = count2;
                        maxOutName = lst[i];
                    }
                }
                cout << "Maximum In-Degree  : Vertex " << maxInName << " " << maxIndegree << endl;
                cout << "Maximum Out-Degree : Vertex " << maxOutName << " " << maxOutdegree << endl;
                break;
            }
        }
    }   
    else
    {
        vector<list<int>> adjMatrix(numVertices, list<int>(0, 0));
        vector<int> lst(numVertices,-1);
        for(int i=0 ; i<numVertices; i++)
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
                int index1 = findIndex(lst,a);
                if(index1!=-1)
                {
                    if(b>=0 and b<=findMaxVal(lst) and checkIsIn(adjMatrix,b,index1) == 0)
                        adjMatrix[index1].push_back(b);
                }
            }
            else if(command == 'r')
            {
                int a,b;
                cin>>a>>b;
                int index1 = findIndex(lst,a),index2 = findIndex(lst,b);
                if(index1!=-1)
                {
                    if(checkIsIn(adjMatrix,b,index1) == 1)
                        adjMatrix[index1].remove(b);
                }
            }
            else if(command == 'v')
            {
                lst.push_back(findMaxVal(lst)+1);
                adjMatrix.push_back(list<int>(0,0));
                numVertices++;
            }
            else if(command == 'u')
            {
                int a;
                cin>>a;
                int index = findIndex(lst,a);
                if(index!=-1)
                {
                    lst.erase(lst.begin()+index);
                    for(int i=0;i<numVertices;i++)
                    {
                        if(checkIsIn(adjMatrix,a,i) == 1)
                            adjMatrix[i].remove(a);
                    }
                    adjMatrix.erase(adjMatrix.begin()+index);
                    numVertices --;
                }
            }
            else if(command == 'p')
            {
                for(int i=0;i<numVertices;i++)
                {
                    cout << "[" << lst[i] << "] -> ";
                    for(auto it = adjMatrix[i].begin(); it!=adjMatrix[i].end();it++)
                    {
                        cout << *it << " -> ";
                    }
                    cout << "NULL" << endl;
                }
                cout << "====================" <<endl;
            }
            else if(command == 'q')
            {
                int maxIndegree = -1 ;
                int maxInName = -1;
                int maxOutdegree = -1 ;
                int maxOutName = -1;

                for(int i=0 ; i< numVertices; i ++)
                {
                    int count1 =0;
                    int count2 =adjMatrix[i].size();
                    for(int y=0 ;y<numVertices;y++)
                    {
                        if(checkIsIn(adjMatrix,lst[i],y) == 1)
                        {
                            count1++;
                        }
                    }
                    if(count1 > maxIndegree or maxIndegree == -1)
                    {
                        maxIndegree = count1;
                        maxInName = lst[i];
                    }
                    if(count2 > maxOutdegree or maxOutdegree == -1)
                    {
                        maxOutdegree = count2;
                        maxOutName = lst[i];
                    }
                }
                cout << "Maximum In-Degree  : Vertex " << maxInName << " " << maxIndegree << endl;
                cout << "Maximum Out-Degree : Vertex " << maxOutName << " " << maxOutdegree << endl;
                break;
            }
        }       
    }
    

    return 0;
}