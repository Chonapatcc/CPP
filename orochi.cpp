#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    getline(cin,t);
    for(int x=1;x<=t.length();x++)
    {
        for(int i=0;i<(t.length()-x)*2;i++)
        {
            cout << " ";
        }
        for(int i=x-1;i>0;i--)
            {
                cout << t[i] << " ";
            }
            for(int i=0;i<x;i++)
            {
                cout << t[i] <<" ";
            }
        cout <<endl;
    }
    
}