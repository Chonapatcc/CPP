#include <bits/stdc++.h>
using namespace std;

int strdiv(string x)
{
    int carry=0;
    for(int i=0 ; i<x.length(); i++)
    {
        int n=carry*10+(x[i]-'0');
        int fldiv=n/105;
        carry=n-fldiv*105;
    }
    return carry;
}


int main()
{
    int n;
    string temp;
    cin>> n; 

    for(int i=0 ; i < n; i++)
    {
        cin >> temp;
        int ans=strdiv(temp);
        if(!ans)
        {
            cout << "YES" ;
        }
        else
        {
            cout << "NO";
        }
        cout <<endl;
        
    }
}