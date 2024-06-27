#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    
    for(int i =0 ; i < a.length(); i++)
    {
        if((a.length()-i)%3==0 and i!=0)
        {
            cout << "," << a[i];
        }
        else
        {
            cout <<a[i];
        }
    }

}