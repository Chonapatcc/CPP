#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int a2;
    bool ch=true;
    for(int i=0 ; i< a.length();i++)
    {
        if(isdigit(a[i])==0 and a[i]!='-')
        {
            ch=false;
            break;
        }
    }
    if(ch)
    {
        a2=stoi(a);
        if(a2>1000000)
        {
            cout << "OVER";
        }
        else if(a2<0)
        {
            cout << "UNDER";
        }
        else
        {
            for(int i =0 ; i<a.length(); i++)
            {
                if(i==0 and a[i]=='0')
                {
                    continue;
                }
                if(a[i]=='0')
                {
                    cout <<0<<endl;
                }
                else
                {
                    cout << a[i];
                    for(int y=0 ; y<a.length()-i-1;y++)
                    {
                        cout <<0;
                    }
                    cout << endl;
                }
            }
        }
    }
    else
    {
        cout <<"Invalid";
    }
    
}