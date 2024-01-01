#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    int arr[100],c=0;
    int temp=0;
    a+=',';
    for(int i=0; i<a.length() ;i++)
    {
        if(a[i]==',')
        {

            arr[c]=temp;
            c++;
            temp=0;
        }
        else
        {
            temp=temp*10+(a[i]-'0');

        }
    }
    for(int i =0 ; i<c;i++)
    {
        for(int y= i+1  ;y<c; y++)
        {
            if(arr[i]>arr[y])
            {
                int x;
                x=arr[i];
                arr[i]=arr[y];
                arr[y]=x;

            }
        }
    }
    if(c%2==0)
    {
        cout << (arr[c/2-1]+arr[c/2])/2.0 ;
    }
    else
    {
        cout << arr[(c+1)/2-1];
    }
    
}