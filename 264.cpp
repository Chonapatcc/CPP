#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    
    int c=0;

    for(int i=0 ; i< a.length() ; i++)
    {
        if(a[i]==' ')
        {
            c++;
        }
    }
    cout << c+1;
}