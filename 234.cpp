#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,temp;
    cin>> n; 

    for(int i=0 ; i < n; i++)
    {
        cin >> temp;
        if(temp%105==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
}