#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;


int a;
int main()
{   
    int arr[10]= {0,2,3,4,5,1};

    for(int i =0 ; i<6 ;i++)
    {
        for(int y= i+1 ;y<6 ;y++ )
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
    for(int i =0 ; i< 6 ;i++)
    {
        cout << arr[i]<<endl;
    }

}