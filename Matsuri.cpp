#include <bits/stdc++.h>
using namespace std;

int main()
{
    int val,n;
    cin >> val >> n;

    int a,b;
    string type;
    string tp;
    for(int i =0;i<n;i++)
    {
        cin >> a >> b >>type;
        if(val>=a and val<=b)
        {
            tp=type;
        }
    }
    cout << tp;
}