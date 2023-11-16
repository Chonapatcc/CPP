#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int sum;
    while (n.length()>1)
    {
        sum=0;
        for(int i=0;i<n.length();i++)
        {
            sum+=n[i]-'0';
        }
        n=to_string(sum);

    }
    cout << n;
}