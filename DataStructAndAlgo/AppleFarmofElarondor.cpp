#include <bits/stdc++.h>
using namespace std;

int getValue(int x ,int y,int **matrix,int a,int b)
{
    int result = 0;
    for(int row= 0 ; row<b; row++)
    {
        for(int column =0 ; column<a ;column++)
        {
            int miniResult =0 ;
            for(int row2 =0 ; row2<x;row2++)
            {
                for(int column2 =0;column2<y;column2++)
                {
                    int val1 = column+column2;
                    int val2 = row+row2;
                    if(val1<0 or val1>=a or val2<0 or val2>=b)
                    {
                        break;
                    }
                    miniResult+=matrix[val2][val1];
                    
                }
            }
            if(miniResult>result)
            {
                result = miniResult;
            }
        }
    }
    return result;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int n,m;
    cin>>n>>m;
    int dif = n/m; 
    int **matrix = new int*[b];
    for(int i=0;i <b; i++)
    {
        matrix[i] = new int[a];
        for(int y= 0 ;y <a;y++)
        {
            cin>>matrix[i][y];
        }
    }
    int result = 0;
    int miniResult =0;

    for(int i=1 ; i<=dif ; i++)
    {
        for(int y=1;y<=dif ; y++)
        {
            if(i*y <=dif)
            {
                miniResult = getValue(i,y,matrix,a,b);
                if(miniResult>result)
                {
                    result = miniResult;
                }
            }
            
        }
    }
    cout << result ; 
}