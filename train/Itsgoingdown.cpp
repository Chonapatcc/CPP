#include <bits/stdc++.h>
using namespace std;

int main()
{
    string te;
    getline(cin,te);
    for(int i=0;i<te.length();i++)
    {
        if(islower(te[i]))
        {
            te[i]=toupper(te[i]);
        }
        else
        {
            te[i]=tolower(te[i]);
        }
    }
    cout << te;
}