#include <iostream>
using namespace std;

void printChain(int n)
{
    for(int i =1 ; i<=n;i++)
    {
        if(i==27)
        {
            break;
        }
        char w=97+i-1;
        cout << w ;
        if(i<n and w!='z')
        {
            cout << '-' ;
        }
    }
    
}

void printChain2(int n)
{
    for(int i =1 ; i<=n;i++)
    {
        if(i==27)
        {
            break;
        }
        cout << '-' ;
        char w=97+(n-i);
        cout << w ;

    }
    
}



int main()
{
    int len;
    cin>>len;
    if(len==0 or len>52)
    {
        cout <<'-';
    }
    else if(len%2==0)
    {
        int div= len/2;
        printChain(div);
        printChain2(div);
    }
    else
    {
        int div= len/2;
        printChain(div+1);
        printChain2(div);
    }
    
}