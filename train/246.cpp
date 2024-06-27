#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int ch=1;
    for(int i=2 ;i < a; i++)
    {
        if(a%i==0)
        {
            ch=0;
            break;
        }
    }
    if(a==1)
    {
        ch=0;
    }
    if(ch)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}