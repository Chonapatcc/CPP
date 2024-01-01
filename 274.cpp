#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=0 ; i<a ; i++)
    {
        for(int y=0; y<i ;y++)
        {
            cout << " ";
        }
        cout << "\\";
        char x=' ';
        
        if (i==a-1)
        {
            x='-';
        }
        else if(a-i==b)
        {
            x='^';
        }
        for(int y=0; y<(a-i)*2+1 ; y++)
        {
            cout << x ; 
        }



        cout << "/" <<endl;
        
    }
    
    
}