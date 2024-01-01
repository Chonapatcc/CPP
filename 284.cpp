#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[10],c=0,temp;
    for(int i= 0; i< a; i++)
    {
        cin>>temp;
        arr[c]=temp;
        c++;
    }

    for(int i=c-1 ; i>=0 ; i--)
    {
        cout << arr[i] <<" ";
    }
}