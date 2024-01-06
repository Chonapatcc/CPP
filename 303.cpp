#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);

    string x="";
    for(int i=0 ; i< a.length() ; i++)
    {
        if(isalpha(a[i]))
        {
            x+=a[i];
        }
    }
    cout << x;
}