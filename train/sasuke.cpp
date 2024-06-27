#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,ind=0,arr[100],sum=0;

    cin >>a;
    while(a!=0)
    {
        arr[ind]=a;
        sum+=a;
        ind++;
        cin>>a;
    }
    int temp;
    for(int i =0 ; i<ind;i++)
    {
        for(int y =i+1;y<ind;y++)
        {
            if(arr[i]>arr[y])
            {
                temp=arr[i];
                arr[i]=arr[y];
                arr[y]=temp;
            }
        }
    }
    string w;
    cin>>w;
    if(w=="Max")
    {
        for(int i =ind-1 ; i >=0;i--)
        {
            cout << arr[i] <<" ";
        }
    }
    else if(w=="Min")
    {
        for(int i =0 ; i < ind;i++)
        {
            cout << arr[i] <<" ";
        }
    }
    else if(w=="Sum")
    {
        cout << sum;
    }
    else
    {
        cout << 0;
    }
}