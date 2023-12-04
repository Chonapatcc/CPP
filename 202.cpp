#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >>n>>x;
    double sum=0,a;
    for(int i =0 ; i< n; i ++)
    {
        cin>>a;
        sum+=ceil(a+a*x/100);
        //cout <<a+a*x/100 <<endl;
    }
    cout <<ceil(sum);
}