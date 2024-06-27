#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int list[n];
    for(int i =0 ; i< n;i++)
    {
        cin >> list[i];
    }
    sort(list,list+n);
    reverse(list,list+n);
    for(int i =0 ; i< n;i++)
    {
        cout << list[i] << endl;
    }
}