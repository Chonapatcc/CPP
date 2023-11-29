#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,n;
    cin >>a;
    int arr[]={1000,500,100,50,20};
    
    for(int i =0; i < sizeof(arr)/sizeof(arr[0]);i++)
    {

        n=floor(a/arr[i]);
        printf("%lld %lld THB\n",n,arr[i]);
        a-=n*arr[i];

    }
}