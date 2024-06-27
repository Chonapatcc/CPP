#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    scanf("%d %d %d\n",&arr[0],&arr[1],&arr[2]);
    
    for(int i=0 ; i<3 ;i ++)
    {
        for(int y=i+1 ;y<3 ;y++)
        {
            if(abs(arr[i])>abs(arr[y]))
            {
                int temp=arr[i];
                arr[i]=arr[y];
                arr[y]= temp;
            }
        }
    }

    for(int i =0 ;i<3 ; i++)
    {
        int x;

        cin>>x;
        
        printf("Distance%d = %d\n",i+1,abs(arr[i])+abs(x));
    }
}