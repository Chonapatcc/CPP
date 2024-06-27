#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int a;
    
    cin>>a;

    long long int plus=1;
    long long int val=1;
    
    while(a!=1)
    {
        plus*=2;
        if(a%2==0)
        {
            a/=2;
        }
        else
        {
            
            a/=2;
            val+=plus;
        }
    }

    cout << val ; 
    
    
    
     


}