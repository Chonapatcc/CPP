#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[100];
    for(int i=0 ; i< a;i ++)
    {
        cin>>arr[i];
    }


    //sort
    for(int i= 0 ; i< a ;i ++)
    {
        for(int y =i+1; y<a; y++)
        {
            if(arr[i]<arr[y])
            {
                int temp=arr[i];
                arr[i]=arr[y];
                arr[y]=temp;
            }
        }
    }
    int mon;
    cin>>mon;

    for(int i=0 ; i< a; i++)
    {
        int n= mon/arr[i];

        printf("%d: %d\n",arr[i],n);

        mon-=n*arr[i];

    }
}