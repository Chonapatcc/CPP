#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1000,500,100,50,20};

    int m;
    cin>>m;
    for(int i =0 ; i< 5 ; i++)
    {
        int dif=m/arr[i];
        m-=dif*arr[i];
        if(dif>0)
        {
            printf("bank%d %d\n",arr[i],dif);
        }
    }
}