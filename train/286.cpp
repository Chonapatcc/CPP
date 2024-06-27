#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a<0)
    {
        cout <<"Error";
        exit(0);
    }
    int arr[4]={1000,500,100,50};
    for(int i=0; i <4 ;i++)
    {
        int dif=a/arr[i];
        a-=dif*arr[i];
        printf("%d-%d\n",arr[i],dif);
    }
}