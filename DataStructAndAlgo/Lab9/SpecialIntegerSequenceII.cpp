#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> path;

void dfs(int node)
{
    if(node <= n)
    {
        path.push_back(node);
        if(node*2 <= n)
        {
            dfs(node*2);
            path.push_back(node);
        }
        if(node*2+1 <= n)
        {
            dfs(node*2+1);
            path.push_back(node);
        }
    }
}

int main() 
{
    cin >> n;

    dfs(1);
    int total =0 ;
    for(int i=0 ; i<path.size() ; i++)
    {
        if((i+1)%2==0)
        {
            total-=path[i] ; 
        }
        else
        {
            total+=path[i];
        }
    }
    cout << total <<endl;
}