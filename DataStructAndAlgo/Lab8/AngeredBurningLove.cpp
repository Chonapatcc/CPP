#include <bits/stdc++.h>
using namespace std;

int findId(vector<int> &node, int val)
{
    for(int i=0;i<node.size();i++)
    {
        if(node[i]==val)
        {
            return i;   
        }
    }
    return -1;
}

void printStore(vector<int> &node, vector<set<int>> &nodeChild)
{
    int size = node.size() ;
    for(int i=0 ; i<size;i++)
    {
        cout<<"node = "<<node[i];
        cout<<"child ";
        for(int x:nodeChild[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}


void bfs(vector<int> &node, vector<set<int>> &nodeChild, int start,vector<bool> &visited,queue<int> &q)
{
    queue<int> newQ;
    bool ch=false;
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";
        int id = findId(node,curr);
        for(int x:nodeChild[id])
        {
            int id2 = findId(node,x);
            if(!visited[id2])
            {
                visited[id2]=true;
                newQ.push(x);
            }
        }
        ch= true;
    }
    if(ch)
    {
        cout<<endl;
    }
    
    if(!newQ.empty())
    {
        bfs(node,nodeChild,newQ.front(),visited,newQ);
    }
}

int main()
{
    int n;
    cin>>n;
    int r;
    cin>>r;

    vector<int> node;
    vector<set<int>> nodeChild;
    node.push_back(r);
    nodeChild.push_back(set<int>());

    for(int i=1; i<n ; i++)
    {
        int p,c;
        cin>>p>>c;

        int id = findId(node,p);
        if(id==-1)
        {
            node.push_back(p);
            nodeChild.push_back(set<int>());
            id = node.size()-1;
        }
        nodeChild[id].insert(c);

        int id2 = findId(node,c);
        if(id2==-1)
        {
            node.push_back(c);
            nodeChild.push_back(set<int>());
            id2 = node.size()-1;
        }
        nodeChild[id2].insert(p);
    }
    
    int start;
    cin>>start;
    vector<bool> visited(node.size(),false);

    queue<int> q;
    q.push(start);
    int id = findId(node,start);
    visited[id]=true;
    bfs(node,nodeChild,start,visited,q);
    // printStore(node,nodeChild);
    return 0;


}