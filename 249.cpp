#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    string temp="";
    char old=0;
    for(int i=0 ; i<a.length();i++)
    {
        if(isalpha(a[i])==false)
        {
            continue;
        }
        if(a[i]==old)
        {
            temp+=a[i];
        }
        else
        {   if(temp!="")
            {
                cout << temp << " ";
            }
            
            temp=a[i];
            old=a[i];
        }
    }
    
    cout << temp ;
}