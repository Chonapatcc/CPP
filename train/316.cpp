#include <bits/stdc++.h>
using namespace std;


int main()
{
    string a;
    cin>>a;
    string x= "" ;
    int c=0;
    int ch = 0 ; 
    for(int i=0 ; i < a.length() ; i++)
    {
        
        if(isalpha(a[i]))
        {
            if(ch)
            {
               x+=toupper(a[i]); 
               ch =0 ; 
            }
            else
            {
                x+=tolower(a[i]);
            }
            c++;

        }
        else
        {
            if(c)
            {
                ch = 1 ; 
            }
            
        }
    }
    cout << x; 
}