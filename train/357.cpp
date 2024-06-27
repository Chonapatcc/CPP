#include <bits/stdc++.h>
using namespace std;

void Sort(int *arr , int count)
{
    for(int i =0; i <count ;i++)
    {
        for(int y = i+1 ; y<count ;y++)
        {
            if(arr[i] > arr[y])
            {
                int temp = arr[i];
                arr[i] = arr[y];
                arr[y] =temp;
            }
        }
    }
}

void Print(int *arr , int count)
{
    Sort(arr , count ) ;
    for(int i =0 ; i< count ;i++)
    {
        cout <<arr[i] <<" ";
    }
    cout <<endl;
}



int main()
{
    int *odd = (int * )malloc(sizeof(int)*100);
    int *even = (int * )malloc(sizeof(int)*100);
    int num;
    int index_1 =0 , index_2 =0;
    while(cin>>num)
    {
        if(num%2==0)
        {
            even[index_2++] = num;
        }
        else
        {
            odd[index_1++] = num;
        }
    }

    if(index_2 >0)
    {
        Print(even , index_2) ;
    }
    if(index_1>0)
    {
        Print(odd , index_1 );
    }   

}