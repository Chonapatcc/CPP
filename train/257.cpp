#include <bits/stdc++.h>
using namespace std;

void sort(int arr[] ,int size, int loser);
int main()
{
    int a;
    cin>>a; 
    //create arr; 

    int arr[a];
    for(int i =0 ; i< a ; i++)
    {
        arr[i]=i+1; 
    }

    int *p=&arr[0];
    //do
    for(int i =0 ; i< a ;i++)
    {
        int *end=&arr[a-1-i];
        p+=1;
        if(a-i==1)
        {
            printf("%d",arr[0]);
            break;
        }
        if(p>end)
        {
            p=&arr[0]+(p-end-1);
        }
        

        sort(&arr[0] , a ,*p);
    }
    
    
    

}

void sort(int arr[] ,int size, int loser)
{   
    int y;
    for(int i =0 ; i< size-1 ; i++)
    {
        if(arr[i]==loser)
        {
            for(y=i ; y<size-1 ;y++)
            {
                arr[y]=arr[y+1] ; 
            }
            arr[y]=0;
            break;
        }
        
    }
    

    
}