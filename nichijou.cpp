#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a>=0 and a<=25)
    {
        cout << "fail";
    }
    else if(a>=26 and a<=50)
    {
        cout << "good";
    }
    else if(a>=51 and a<=75)
    {
        cout << "very good";
    }
    else
    {
        cout << "excellent";
    }
}