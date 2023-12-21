#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    string t;
    cin>>t;
    int one=0,zero=0;
    for(int i=0 ; i< t.length()-1; i++)
    {
        if(t[i]=='0')
        {
            zero++;
            break;
        }
        
    }
    if(zero)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
