#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int c=a+b;
    string t=to_string(c);
    for(int i =t.length()-1;i>=0;i--)
    {
        cout << t[i];
    }
}
