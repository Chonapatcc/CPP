#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int c=a/b;
    int cou,tard;
    cou=c;
    tard=c;
    int temp;
    while(cou>=2 or tard>=4)
    {
        temp=cou/2;
        cou-=temp*2;
        c+=temp;
        cou+=temp;
        tard+=temp;
        
        temp=tard/4;
        tard-=temp*4;
        c+=temp;
        cou+=temp;
        tard+=temp;
    
    }
    cout <<c;
}