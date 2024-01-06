#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin>>a;
    long long int arr[a];

    for(int i=0 ; i< a;i++)
    {
        cin>>arr[i];
    }
    long long int gcdmax=0;
    for(int i=0 ; i< a; i++)
    {
        for(int y=i+1; y<a; y++)
        {
            long long int n1=arr[i];
            long long int n2=arr[y];
            if(n1<n2)
            {
                long long int temp=n1;
                n1=n2;
                n2=temp;
            }

            long long int eu=n1%n2;
            while(eu!=0)
            {
                n1=n2;
                n2=eu;
                eu=n1%n2;
            }

            if(n2>gcdmax)
            {
                gcdmax=n2;
            }
        }
    }
    cout << gcdmax;
}