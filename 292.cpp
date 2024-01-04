#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    string arr[a];
    for(int i=0 ; i< a; i++)
    {
        cin>>arr[i];

    }

    for(int i=0 ; i< a ; i++)
    {
        for(int y=i+1 ;y< a; y++)
        {
            if(arr[i]>arr[y])
            {
                string temp=arr[i];
                arr[i]=arr[y];
                arr[y]=temp;
            }
        }


        
    }
    for(int i=0 ; i<a ;i++)
    {
        cout << arr[i] <<endl;
    }
}