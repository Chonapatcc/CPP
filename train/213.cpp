#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>> a;
    for(int i =0 ; i <a.length() ;i ++)
    {
        if(i==0 or tolower(a[i]-(i+1))=='b')
        {
            printf("%c",toupper(a[i]-(i+1)));
        }
        else
        {
            printf("%c",tolower(a[i]-(i+1)));
        }
        
    }
}
