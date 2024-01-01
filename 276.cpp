#include <bits/stdc++.h>
using namespace std;

void func(int *arr)
{
    extern int c;
    string t;
    getline(cin,t);
    int temp=0;
    t+=',';
    for(int i=0 ; i< t.length() ;i++)
    {
        if(t[i]==',')
        {
            arr[c]=temp;
            temp=0;
            c++;
        }
        else
        {
            temp=temp*10+(t[i]-'0');
        }
    }
    
}
int c=0;
int main()
{
    int arr[4];

    
    for(int i =0; i < 2; i ++)
    {
        func(&arr[0]);
    }
    
    

    int a=arr[0]*arr[3],b=arr[1]*arr[2],base=arr[1]*arr[3];

    int x =a+b;
    int gcd=0 ,m=0;
    if(x>base)
    {
        m=base;
    }
    else
    {
        m=x;
    }
    
    for(int i= 1; i<m ;i++)
    {
        if(x%i==0 and base%i==0)
        {
            gcd=i;
        }
    }
    if(x==base)
    {
        printf("1");
    }
    else
    {
        printf("%d/%d",x/gcd,base/gcd);
    }
}