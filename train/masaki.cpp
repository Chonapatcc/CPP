#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a>> b;
    for(int i =0 ; i <=a;i++)
    {
        int x=i*1,y=(a-i)*2;
        if(x-y>=b)
        {
            //cout << i << " " << a << " " << x <<" " << y << endl;
            cout << i;
            break;
        }
    }
}