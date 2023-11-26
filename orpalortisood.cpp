#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line,a="",b="",name;
    getline(cin,line);
    cin >> name;
    bool ch=true;
    for(int i =0 ;i <line.length();i++)
    {   
        if(line[i]==':')
        {
            ch=false;
            continue;  
        }
        if(ch)
        {
           a+=line[i]; 
        }
        else
        {
            b+=line[i];
        }
    }
    int n1,n2;
    n1=stoi(a);
    n2=stoi(b);
    if (n1>5 and n1<12)
    {
        cout << "Good morning";
    }
    else if(n1>12 and n1<18)
    {
        cout << "Good afternoon";
    }
    else
    {
        cout << "Good evening";
    }
    cout << ", " << name; 
}