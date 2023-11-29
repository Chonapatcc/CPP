#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,t="";
    getline(cin,a);

    int cn=0,x=0;
    for(int i =0 ; i< a.length();i++)
    {
        if(isdigit(a[i]))
        {
            t+=a[i];
        }

    }
    for(int i =0 ; i< t.length()-1;i++)
    {

        x+=(13-i)*(t[i]-'0');
        //cout<<t[i] << " " << t[i]-'0' << " " << 13-i << endl;

    }
    x=x%11;
    if(x<=1)
    {
        x=1-x;
    }
    else if(x>1)
    {
        x=11-x;
    }

    if(x==a[a.length()-1]-'0')
    {
        cout << "Maybe right";
    }
    else
    {
        cout << "Wrong NO.";
    }

    


}