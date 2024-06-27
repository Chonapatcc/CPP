#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    getline(cin,t);
    string a="";
    int x,y;
    int ind1=t.find("=");
    for(int i=0;i<ind1;i++)
    {
        a+=t[i];
    }

    x=stoi(a);
    a="";
    for(int i =ind1+2;i<t.length();i++)
    {
        a+=t[i];
    }
    y=stoi(a);
    if(x>y)
    {
        cout << x;
    }
    else
    {
        cout << y;
    }
}