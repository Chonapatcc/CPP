#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int size=2*n+1;
    for(int i =0;i<=n;i++)
    {
        int dif=i*2;
        for(int y =0;y<i;y++)
        {
            cout << y;
        }
        for(int y=0;y<(size-dif);y++)
        {
            cout << i;
        }

        for(int y =i-1;y>=0;y--)
        {
            cout << y;
        }
        cout << endl;
    }
    for(int i =n-1;i>=0;i--)
    {
        int dif=i*2;
        for(int y =0;y<i;y++)
        {
            cout << y;
        }
        for(int y=0;y<(size-dif);y++)
        {
            cout << i;
        }

        for(int y =i-1;y>=0;y--)
        {
            cout << y;
        }
        cout << endl;
    }

}