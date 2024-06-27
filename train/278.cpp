#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    cout << "{ ";
    int c=0;
    for(int i=1;i<=a; i++)
    {
        
        if(i%15==0)
        {
            if(c==0)
            {
                c++;
            }
            else
            {
                cout<<",";
            }

            cout << i;
        }
    }
    cout<<" }";
}