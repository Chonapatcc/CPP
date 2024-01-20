#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    
    long long int arr[200] = {1,1};
    int n=1;

    for(int i= 0;i<a; i++)
    {
        arr[n+1] = arr[n]+arr[n-1];
        n++;
    }

    for(int i=0 ; i< a; i++)
    {
        cout << arr[i] <<' ';
    }



}