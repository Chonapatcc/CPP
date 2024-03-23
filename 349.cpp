#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n =0 ;
    double input = 0;
    cin >> input;
    int c=0;
    while(input!=-1)
    {
        n+=input;
        c++;
        cin>>input;
    }
    if (c==0)
    {
        printf("%.2lf",n);
    }
    else
    {
        printf("%.2lf",n/c);
    }
}