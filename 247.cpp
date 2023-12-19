#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6], n ,c=0;
    for(int i =0 ;i<6 ;i++)
    {
        cin>>n;
        int ch=1;
        for(int y=0 ;y<c;y++)
        {
            if(n==arr[y])
            {
                ch=0;
                break;
            }
        }
        if(ch)
        {
            arr[c]=n;
            c++;
        }
    }

    for(int i =0 ;i<c; i++)
    {
        for(int y=i+1;y<c;y++)
        {
            int temp;
            if(arr[y]<arr[i])
            {
                temp=arr[y];
                arr[y]=arr[i];
                arr[i]=temp;
            }
        }
        
        
    }
    cout << "[" <<arr[0];
    for(int i =1 ; i< c; i++)
    {
        cout  <<", "<< arr[i];
    }
    cout << ']';
}