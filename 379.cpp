#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    if(str[0] <'0' or str[0] >'9' )
    {
        cout <<"ERROR";
        exit(0);
    }
    double xx= stof(str);
    if(int(xx)!=xx)
    {
        printf("ERROR");
        exit(0);
    } 
    int a= xx;

    // if(xx[0]=='r')
    // {

    // }
    string x="";

    if(a>=pow(2,8) or a<0)
    {
        cout <<"ERROR";
        exit(0);
    }
    while(a>0)
    {
        x+= to_string(a%2);
        a=a>>1;
    }

    for(int i =0 ;i<8-x.length() ;i++)
    {
        cout << '0';
    }
    for(int i =x.length()-1 ; i>=0 ; i--)
    {
        cout << x[i];
    }

}