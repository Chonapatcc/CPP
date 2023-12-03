#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,star="";
    cin >> a;
    for(int i =0 ; i<a.length()+4;i++)
    {
        star+='*';
    }
    cout << star <<endl;
    
    cout << "* " << a << " *" <<endl;
    cout <<star <<endl;
}