#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    string list[a];
    for(int i =0;i<a;i++)
    {
        cin >> list[i];
    }
    reverse(list,list+a);
    for(int i =0;i<a;i++)
    {
        cout << list[i] << endl;
    }
}