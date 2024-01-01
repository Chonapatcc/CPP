#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    int ch=1;
    for(int i=0 ; i < a.length()  ; i++)
    {
        if(a[i]!=a[a.length()-1-i])
        {
            ch=0;
            break;
        }
    }
    if(ch)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No" ;
    }
}