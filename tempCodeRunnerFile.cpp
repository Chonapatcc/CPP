#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int a;
    
    cin>>a;

    int plus=1;
    int val=1;
    
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