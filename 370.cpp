#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i =0 ;i<n ;i++)
    {
        for(int y =0 ;y<m ;y++)
        {
            cin>>matrix[i][y];
        }
    }

    for(int y=0 ; y<m ;y++)
    {
        int max =0;
        for(int i=0 ;i<n;i++)
        {
            if(matrix[i][y]>max)
            {
                max = matrix[i][y];
            }
        }
        cout <<max <<" ";
    }
    cout <<endl;
    for(int i=0 ;i<n;i++)
    {
        int max =0;
        for(int y=0;y<m;y++)
        {
            if(matrix[i][y]>max )
            {
                max = matrix[i][y];
            }
        }
        cout <<max <<" ";
    }

}