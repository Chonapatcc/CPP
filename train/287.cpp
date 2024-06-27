#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    if(a==b and a==c)
    {
        cout << a;
        exit(0);
    }
    int dif=stoi(a)+stoi(b)+stoi(c);
    dif/=3;
    cout <<dif;
}