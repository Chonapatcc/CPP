#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;
    int temp;
    int arr[]={a,b,c};

    for(int i =0 ; i< 3  ; i++)
    {
        for(int y=i+1;y<3 ;y++)
        {
        if(arr[i]>arr[y])
        {
            temp=arr[i];
            arr[i]=arr[y];
            arr[y]=temp;
        }
        }
        

    }
    for(int i=2 ; i>=0 ; i--)
    {
        cout << arr[i]<<endl;
    }
}