#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>> a;

    for(int i=0 ; i < a;i++)
    {
        for(int y=0 ; y<i+1 ; y++)
        {
            cout << "O";
        }
        cout << endl;
    }
}