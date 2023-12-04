#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    int big=0,low=0;

    for(int i= 0 ; i< a.length(); i++)
    {
        if(isupper(a[i]))
        {
            big++;
        }
        else if(islower(a[i]))
        {
            low++;
        }
        
    }
    cout << "UPPER:" <<big <<endl << "LOWER:" << low;
}