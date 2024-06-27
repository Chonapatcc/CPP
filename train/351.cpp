#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    string x[]={"Bling","bang", "bang", "bling", "bang" ,"bang" ,"Bling" ,"bang" ,"bang" ,"born"};
    int s = 10;
    while(n>=10)
    {
        for(int i =0 ; i< s; i++)
        {
            cout <<x[i] <<' ';
        }
        cout <<endl;
        n-=10;
    }

    for(int i =0 ; i<n ;i++)
    {
        cout <<x[i] <<' ';
    }


}