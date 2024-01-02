#include <bits/stdc++.h>
using namespace std;

string func(string a,string b)
{
    int len1=a.size();
    int len2=b.size();

    vector<int> result(len1+len2,0);

    int id1=0;
    int id2=0;
    for(int i =len1-1 ;i >=0 ;i--)
    {
        int n1= a[i]-'0';
        int carry =0 ;
        id2=0;
        for(int y = len2-1 ;y>=0 ;y--)
        {
            int n2= b[y]-'0';
            int n = n1*n2 +carry + result[id1+id2];
            carry= n/10;
            result[id1+id2]=n%10;
            id2++;
        }
        if(carry>0)
        {
            result[id1+id2]= carry;
        }
        
        id1++;
    }
    string t="";
    int i=result.size()-1;
    while(i>=0 and result[i]==0)
    {
        i--;
    }
    while(i>=0)
    {
        t+=to_string(result[i--]);
    }

    return t;
}

int main()
{
    string a;
    cin>>a;

    for(int i=0 ; i<a.length() ; i++)
    {
        if(isalpha(a[i]))
        {
            cout << "what";
            exit(0);
        }
    }
    int n=stoi(a);
    string x="1";
    for(int i=1; i<=n ;i++)
    {
        x=func(x,to_string(i));
        
    }
    int c=0;
    for(int i =x.size()-1 ; i>=0 ;i--)
    {
        if(x[i]!='0')
        {
            break;
        }
        c++;
    }
    printf("Number of %d factoria have 0 of the end equal %d",n,c);
    
    

    
    
}