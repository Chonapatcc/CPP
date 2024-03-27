#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n[11]={0};
    int input;
    string list[11] ={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    while(cin>>input)
    {
        n[input]++;
    }

    
    int ch=0;
    for(int i =0 ; i<=10 ;i++)
    {
        
        if(n[i]>0)
        {
            if(ch)
            {
                cout <<", ";
            }
            else
            {
                cout <<"There is ";
            }
            cout <<list[n[i]] <<" " <<i;
            ch=1;
        }
    }
    cout <<'.';
}