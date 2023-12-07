#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,want,temp="";
    
    getline(cin,a);
    cin >> want;


    int ls[want.length()],c=0;
    for(int i =0 ; i< a.length() ;i++)
    {
        temp="";
        for(int y=i  ;y<i+want.length() ; y++)
        {
            temp+=a[y];
        }
        if(temp==want)
        {
            ls[c]=i;
            c++;
        }
        
    }

    
    temp="";

    bool ch=true;
    string temp2;
    for(int i =0 ; i< a.length() ;i++)
    {
        ch=true;
        for(int y =0 ; y<c; y++)
        {
                if(i==ls[y])
                {
                    ch=false;
                    break;
                }
        }
        if(i==a.length()-1)
        {
            temp+=a[i];
            cout << temp;
        }
        else if(ch)
        {
            temp+=a[i];
        }
        else
        {
            temp2="";
            for(int y=i ; y<i+want.length() ;y++)
            {
                temp2+=a[y];
            }
            cout << temp <<temp2 <<endl;
            i+=want.length()-1;
            temp=temp2;

        }
       
    }
}