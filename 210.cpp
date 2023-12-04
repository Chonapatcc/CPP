#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,total=0;
    cin>>a;
    while (a>=3)
    {
        a-=3;
        a+=1;
        total+=3;
    }
    total+=a;
    cout << total;

}