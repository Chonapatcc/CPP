#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    for(int i =0 ; i<c;i++)
    {
        for(int y=0;y<a;y++)
        {
            for(int z=0;z<b;z++)
            {
                cout << '.' ;
            }

            cout<<" ";
        }
        cout<<endl;

    }
}