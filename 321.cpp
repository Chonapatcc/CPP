#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a; 
    if(a<=0)
    {
        cout << "ERROR";
    }
    else
    {
        while(a>0)
        {
            cout << a%10 <<endl;
            a/=10;
        }
    }
}