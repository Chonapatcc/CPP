#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(tolower(a[0])=='h')
    {
        a[0]=' ';
    }
    else
    {
        a=" "+a;
    }
    
    b=b+" ";
    a+=+" "+b;
    string dash="",space="";
    int le=a.length();
    for(int i = 0; i < le;i++)
    {
        a[i]=toupper(a[i]);
        dash+="—";
        space+=" ";
    }
    

    cout << "|"+a+"|" <<endl;
    cout << "|"+dash+"|" <<endl;
    cout << "|"+space+"|" <<endl;
}