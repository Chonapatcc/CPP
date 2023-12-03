#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,vo="aeiou";
    bool ch=true;
    getline(cin,a);
    for(int i =0 ; i<a.length();i++)
    {
        ch=true;
        for(int y=0 ; y<5; y++)
        {
            if(a[i]==vo[y])
            {
                cout << y+1;
                ch=false;
                break;
            }
        }
        if(ch)
        {
            cout<< a[i];
        }

    }
}