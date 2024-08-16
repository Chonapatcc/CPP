#include <bits/stdc++.h>
using namespace std;

void recur(vector<vector<vector<int>>> &cube,int n,int x,int y,int z,int intense)
{
    int check = (x>=0 and x<n) and (y>=0 and y<n) and ( z>=0 and z<n);
    if(!check)
    {
        return ;
    }
    if(cube[x][y][z] < intense)
    {
        cube[x][y][z] = intense;
    }
    else
    {
        return ;
    } 
    if(intense-1>0)
    {
        intense -=1;
        int w[3] = {0,-1,1};
        for(int i1=0 ; i1<3; i1++)
        {
            for(int i2 =0 ;i2<3;i2++)
            {
                for(int i3 =0 ;i3<3;i3++)
                {
                    recur(cube,n,x+w[i1],y+w[i2],z+w[i3],intense);
                }
            }
        }
    }
}

void printArr(vector<vector<vector<int>>> cube , int n)
{
    for(int i=0 ; i < n ; i++)
    {
        for(int j=0 ; j < n ; j++)
        {
            for(int k=0 ; k < n ; k++)
            {
                cout << cube[i] [j] [k] << " ";
            }
            cout << endl;
        }
        if(i<n-1)
        {
            cout << endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int x,y,z , intense;
    cin>>x>>y>>z;
    cin>>intense;
    vector<vector<vector<int>>> cube(n, vector<vector<int>>(n, vector<int>(n, 0)));
    recur(cube,n,x,y,z,intense);    
    printArr(cube,n);
}