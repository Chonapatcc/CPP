#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin  >> a;
    string temp="";
    for(int i =1 ; i< a.length()-1 ; i++)
    {
        temp+=a[i];
    }

    int n=stoi(temp),fac=1;
    for(int i =1 ;i<=n ; i++)
    {
        fac*=i;
    }
    cout << n << "!:" <<fac ; 

}