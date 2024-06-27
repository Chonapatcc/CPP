#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    int p=0,t=0;
    for(int i =1 ; i< a.length()-1 ; i++)
    {
        if(a[i]=='P')
        {
            p++;
        }
        t++;
    }
    cout << p << " / " << t << " Passed" ;
}