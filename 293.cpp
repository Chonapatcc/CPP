#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n]={2},c=1;
    int num=3,sum=0;
    while(c<n)
    {
        int ch=0;
        for(int i =0 ;i< c; i++)
        {
            if(num%arr[i]==0)
            {
                ch=1;
                break;
            }
        }
        if(!ch)
        {
            
            arr[c]=num;
            sum+=num;
            c++;
        }
        num++;
    }
    cout << sum+2; 
}