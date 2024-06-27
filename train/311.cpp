#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int n;
    getline(cin,a);
    cin>>n;
    int s=a.length() ;
    n=n%s;
    if(n>0)
    {
        for(int i=s-n ; i<s ; i++)
        {
            cout << a[i];
        }

        for(int i =0 ;i<s - n ;i++)
        {
            cout << a[i];
        }
    }
    else if(n<0)
    {
        n=-n;
        for(int i =n ; i<a.length() ; i++)
        {
            cout << a[i];
        }
        for(int i=0; i < n ; i++)
        {
            cout << a[i];
        }
    }
    else
    {
        cout << a;
    }
}