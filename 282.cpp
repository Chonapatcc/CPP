#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin>>a;
    int arr[4]={10,20,40,80};
    if(a==0)
    {
        cout << 0 ;
        exit(0);
    }
    if(a==5)
    {
        cout << 160;
        exit(0);
    }

    for(int i =1 ; i <=4 ;i++)
    {
        if(a==i)
        {
            cout << arr[i-1];
        }
        else if(i<4 and a>i and a<i+1)
        {
            int dif= (arr[i-1]+arr[i])/2;
            cout << dif;
        }
    }
}