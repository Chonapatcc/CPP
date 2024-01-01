#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    a+=' ';
    int c=0,temp=0;
    for(int i=0 ; i<a.length() ; i++)
    {
        if(a[i]==' ')
        {
            c++;
            if(c%2==0)
            {
                cout << temp*2 <<" ";
            }
            else
            {
                cout << temp <<" ";
            }
            temp=0;
        }
        else
        {
            temp=temp*10+(a[i]-'0');
        }
    }
}