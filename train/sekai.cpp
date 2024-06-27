#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a>>b>>c;

    int m=-20000,n=20000,arr[]={a,b,c};
    for(int i =0 ; i<3;i++)
    {
        if(arr[i]<n)
        {
            n=arr[i];
        }
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    int c1=0,c2=0;
    for(int i =0 ; i < 3;i++)
    {
        if(arr[i]!=n and n<arr[i])
        {
            c1++;
        }
        if(arr[i]!=m and m>arr[i])
        {
            c2++;
        }
    }
    if(c1==2 or c2==2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}