#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    
    for(int i=0 ; i<=a; i++)
    {
        for(int y=0 ; y<a-i ;y++)
        {
            cout << "  ";
        }
        if(i==0)
        {
            cout << '_' <<endl;
        }
        else
        {
            cout << "_|" <<endl;
        }
    }

}