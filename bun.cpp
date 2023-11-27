#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>> a;
    if (a<=0)
    {
        cout << "Input must be greater than 0.";
    }
    else
    {

    
    for(int i =0 ; i<a;i++)
    {
        if(i%2==0)
        {
            for(int y=0;y<i+1;y++)
            {
                cout <<5;
            }
            cout << endl;
        }
        else
        {
            for(int y=0;y<i+1;y++)
            {
                cout << 2;
            }
            cout <<endl;
        }
    }
    }
}