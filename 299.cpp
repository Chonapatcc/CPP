#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int sum=0;
    int temp;
    for(int i=0 ; i< b ; i++)
    {
        cin >>temp;
        sum+=temp;
    }
    int i=0;
    int ch=0;
    if(sum%2!=0)
    {
        i=1;
        ch=1;
    }
    for(; i< a;i++)
        {
            for(int y=0; y<a; y++)
            {
                if((i+y)%2==0)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "- ";
                }
                
            }
            cout << endl;
        }
    
    if(ch)
    {
        for(int y =0 ;y<a;y++)
        {
            if((i+y)%2==0)
            {
                cout << "* ";
            }
            else
            {
                cout << "- ";
            }
        }
    }
}