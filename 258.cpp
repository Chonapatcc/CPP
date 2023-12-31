#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    while(a!=0)
    {
        string x="";
        if(a%2==0)
        {
            x="even";
        }
        else
        {
            x="odd";
        }
        cout <<a<< " = "<<x << endl;
        cin>>a;
        
    }
}