#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    for(int i=0 ; i< a; i ++)
    {
        for(int y =0 ;y < a-i-1 ; y++)
        {
            cout <<' ';
        }
        cout << "/";
        for(int y= 0 ; y<i ;y++)
        {
            cout << "  ";
        }
        cout << "\\" <<endl;

    }

}