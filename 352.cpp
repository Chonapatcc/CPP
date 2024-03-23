#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    string a2="";
    string temp ="";
    for(int i =0 ; i<a.length() ; i++ )
    {
        if(a[i]==' ')
        {
            a2 = temp+" "+a2;
            temp = "";
        }
        else
        {
            temp+=a[i];
        }
    }
    a2 = temp+" "+a2;
    cout << a2;

    
}