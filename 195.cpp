#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >>a;
    for(int i =0 ; i< a.length(); i++)
    {
        if(i%2==0)
        {
            cout << a[i];
        }
        else
        {
            printf("%c",toupper(a[i]));
        }
    }
}