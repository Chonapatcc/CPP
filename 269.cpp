#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    string x="0";
    int n1=100000,n2=100000;
    a+=',';
    for(int i=0 ; i<a.length() ; i++ )
    {
        if(a[i]==',')
        {
            int xx= stoi(x);
            if(xx<n1)
            {
                n2=n1;
                n1=xx;
            }
            else if(xx<n2)
            {
                n2=xx;
            }
            x="0";
        }
        else
        {
            x+=a[i];
        }

    }
    cout << n2;


}