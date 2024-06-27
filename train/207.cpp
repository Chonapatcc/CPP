#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,n=0,arr[100];
    cin>>a;
    for(int i =1; i <=a; i++)
    {
        if(a%i==0)
        {
            arr[n]=i;
            n++;
        }
    }
    cout << n <<" : "; 
    for(int i =0 ; i< n ; i++)
    {
        if(i==0)
        {
            cout << arr[i];
        }
        else
        {
            cout << "," << arr[i];
        }
    }
}