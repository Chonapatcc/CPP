#include <bits/stdc++.h>
using namespace std;

int main()
{
    string temp ,name,pass,nlog , plog;
    for(int i =0 ;i < 4; i ++)
    {
        cin >> temp >> temp;
        if(i==0)
        {
            cin >> name;
        }
        else if(i==1)
        {
            cin>>pass;
        }
        else if(i==2)
        {
            cin >>nlog;
        }
        else
        {
            cin >> plog;
        }
    }
    if(name==nlog and pass==plog)
    {
        cout << "Success";
    }
    else
    {
        cout << "Error";
    }
}