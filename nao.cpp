#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >>a;
    int b=1;
    for(int i =0 ; i<a.length()/2; i++)
    {
        if(tolower(a[i])!=tolower(a[a.length()-i-1]))
        {
            b=0;
            break;
        }

    }
    if(b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
