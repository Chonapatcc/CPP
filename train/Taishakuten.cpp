#include <bits/stdc++.h>
using namespace std;

int main()
{
    int list[6];
    for(int i =0 ; i< 5 ;i++)
    {
        cin >> list[i];
    }
    sort(list,list+5);
    reverse(list,list+5);

    for(int i =0 ;i < 5 ;i++)
    {
        cout << list[i] << endl;
    }
}