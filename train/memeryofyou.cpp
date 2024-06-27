#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int arr[100],c=0;
    cin >> a;
    while (a>=0)
    {
        arr[c]=a;
        c++;
        cin >> a;
    }
    for(int i =0; i < c;i++)
    {
        cout << arr[i]+a<<endl;
    }
}