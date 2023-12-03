#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int n1=a.length(),n2=b.length();

    if(n1>n2)
    {
        for(int i =n2 ; i <n1;i++)
        {
            cout << a[i];
        }
        cout << " = " << n1-n2;
    }
    else
    {
        for(int i =n1 ; i <n2;i++)
        {
            cout << b[i];
        }
        cout << " = " << n2-n1;
    }
    
    
}