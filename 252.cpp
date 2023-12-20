#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int x=sqrt(a);
    int down=0,right=0,up=0,left=0,num=1,ind=1,dif=0;
    int arr[x][x];
    string way="down";
    
    while (num<a)
    {
    //down
    if(ind==2)
    {
        dif++;
        ind=0;
    }
    if(way=="down")
    {
        for(int i =0;  i< a ;i ++)
            {
                arr[i][dif]=num;
                num++;
            }
        down++;
    }
    
    
    }
    

}