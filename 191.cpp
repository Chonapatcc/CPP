#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,a,sum=0;
    cin >>n>>m>>k>>a;

    for(int i =0 ; i <=m-n ;i++)
    {
        sum+=k;
        k+=a;
    }
    sum=1234-sum;
    if(sum<=0)
    {
        cout << "YES";
    }
    else
    {
        cout << sum;
    }
}