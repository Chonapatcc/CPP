#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    bool ch=false,printed=false;
    string num;
    int n;
    a+=',';

    for(int i =0;i<a.length();i++)
    {   
        if(a[i]==',')
        {
            n=stoi(num);
            num="";
            if(n%7==0 and n%11!=0 or n==1)
            {
                if(printed)
                {
                    cout <<","<<n;
                }
                else
                {
                    cout << n ;
                    printed=true;
                }
                
            }
        }
        else
        {
            num+=a[i];
        }

    }


}