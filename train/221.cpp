#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    string temp="";
    
    for(int i =n ; i>0;i--)
    {
        temp="";
        for(int y=0;y<i;y++)
        {
            temp+='-';
        }
        for(int y=0;y<s-i*2;y++)
        {
            temp+='*';
        }
        for(int y=0;y<i;y++)
        {
            temp+='-';
        }
        cout << temp <<endl;
    }
    string star="";
    for(int i =0;i<s;i++)
    {
        star+='*';
    }
    
    for(int i =0 ; i< s-n*2; i++)
    {
        cout << star <<endl;
    }

    for(int i =1 ; i<=n;i++)
    {
        temp="";
        for(int y=0;y<i;y++)
        {
            temp+='-';
        }
        for(int y=0;y<s-i*2;y++)
        {
            temp+='*';
        }
        for(int y=0;y<i;y++)
        {
            temp+='-';
        }
        cout << temp <<endl;
    }
}