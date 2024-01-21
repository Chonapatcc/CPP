#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    
    int narr[8]={};
    int arr[8] = {2,3,5,7,11,13, 17, 19};
    int ch =0 ;
    for(int i=0 ; i< 8; i++)
    {
        while(a%arr[i]==0)
        {
            a/=arr[i];
            narr[i]++;
        }
        if(narr[i]>0)
        {
            if(ch)
            {
                cout << " * ";
            }
            ch = 1; 
            if(narr[i]==1)
            {
                cout << arr[i];
            }
            else
            {
                cout << arr[i] << "^" <<narr[i];
            }
            
        }
    }
    
   
}