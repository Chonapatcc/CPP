#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin >> a>>b;
    bool ch1=true,ch2=true;
    for(int i =0;i<a.length();i++)
    {
        if(isdigit(a[i])==false)
        {
            ch1=false;
            break;
        }
    }
    if(ch1)
    {
        for(int i =0 ; i < b.length();i++)
        {
            if(isdigit(b[i])==false)
            {
                ch2=false;
                break;
            }
        }
    }
    if(ch1 and ch2)
    {
        int x=stoi(a)+stoi(b);
        x*=x;
        string num=to_string(x);
        for(int i =0 ; i < num.length(); i++)
        {
            if((num.length()-i)%3==0 and i!=0)
            {
                cout << "," << num[i];
            }
            else
            {
                cout <<num[i];
            }
        }
    }
    else
    {
        cout << "Error" ; 
        return 0;
    }

    

}