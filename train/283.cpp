#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    for(int i=0 ; i< 3 ; i++)
    {
        cin>>arr[i];
    }
    for(int i =0 ; i< 3 ; i++)
    {
        for(int y= i+1 ; y<3; y++)
        {
            if(arr[i]> arr[y])
            {
                int x=arr[i];
                arr[i]=arr[y];
                arr[y]=x;
            }
        }
        cout << arr[i]<<" ";
    }
    

}