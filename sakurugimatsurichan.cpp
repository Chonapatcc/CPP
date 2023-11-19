#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    string ind="A23456789JQK";
    string list[ind.length()];
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=' ')
        {
            list[ind.find(a[i])]=a[i];
        }
    }
    for(int i =0;i<ind.length();i++)
    {
        if(list[i].empty()==false)
        {
           cout << list[i]<<" "; 
        }
        
    }

}