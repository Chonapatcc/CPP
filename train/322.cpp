#include <bits/stdc++.h>
using namespace std;
void func(string arr[],int a,int b ,int x, int y)
{
    arr[x][y]='.';
    int di[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    for(int i=0 ; i <4; i ++)
    {
        int dix=x+di[i][0];
        int diy=y+di[i][1];
        if(dix>=0 and dix<a and diy>=0 and diy<b)
        {
            if(arr[dix][diy]=='#')
            {
                func(arr,a,b,dix,diy);
            }
        }
    }
}

void printloop(string arr[],int a, int b)
{
    for(int i= 0; i<a; i++)
    {
        for(int y= 0 ; y<b ;y++)
        {
            cout << arr[i][y] <<" "; 
        }
        cout << endl;
    }
}
int main()
{
    int a,b,temp;
    scanf("%d %d\n",&a,&b);

    string arr[a]; 

    for(int i =0 ; i<a; i++)
    {
        getline(cin,arr[i]);

        
    }
    int num =0;
    for(int i=0 ; i<a;  i++)
    {
        for(int y=0;y<b;y++)
        {
            if(arr[i][y]=='#')
            {
                func(arr,a,b,i,y);
                num++;
            }
        }
    }

    //printloop(arr,a,b);

    cout << num ; 
    
}