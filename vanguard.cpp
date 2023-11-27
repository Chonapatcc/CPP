#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,n=numeric_limits<int>::max(),m=numeric_limits<int>::min(),total=0;
    cin >> a;
    while (a!=0)
    {
        total++;
        if(a>m)
        {
            m=a;
        }
        if(a<n)
        {
            n=a;
        }
        cin >> a;
    }
    if(total==0)
    {
        m=0;
        n=0;
    }
    cout << "Total : " << total <<endl;
    cout << "Maximum : " << m << endl;
    cout << "Minimum : " << n << endl;
}