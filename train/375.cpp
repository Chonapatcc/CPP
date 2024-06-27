#include <bits/stdc++.h>
using namespace std;
void sortArr(int arr[],int size)
{
    for(int i =0 ; i<size ;i++)
    {
        for(int y= i+1 ;y<size ;y++)
        {
            if(arr[i]>arr[y])
            {
                int temp = arr[i];
                arr[i]= arr[y];
                arr[y] = temp;
            }
        }
    }
}
int main()
{
    int arr[100];
    int index=0;
    int input;
    while(cin>>input)
    {
        arr[index++] = input;
    }
    sortArr(arr,index);
    int max=0;
    for(int i =1 ; i<index ;i++)
    {
        int dif = arr[i]-arr[i-1] -1;
        if(dif>max)
        {
            max = dif;
        }
    }
    if(max==1)
    {
        cout <<max<<" day" ;
    }
    else 
    {
        cout << max <<" days";
    }
}