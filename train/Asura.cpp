#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=-50000;
    int x;
    for(int i =0;i<3;i++)
    {
        cin >> x;
        if(x>a)
        {
            a=x;
        }
    }    
    cout << "MAX : "<< a;
}