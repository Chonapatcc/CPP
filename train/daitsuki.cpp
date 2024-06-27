#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    char let;

    for(int i =0;i<a.length();i++)
    {
        if(isupper(a[i]))
        {
            let=tolower(a[i]);
            cout << let;
        }
        else
        {
            let=toupper(a[i]);
            cout << let;
        }
    }
}