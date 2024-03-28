#include <bits/stdc++.h>
using namespace std;

int bubbleSort(int arr[],int size)
{
    int count =0;
    for(int i =0 ; i< size-1 ;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            count++;
        }
    }
    return count;
}

void printList(int arr[],int size)
{
    for(int i =0 ; i< size ; i++)
    {
        cout << arr[i] <<' ';
    }
    cout <<endl;
}

int main()
{
    int list[100];
    int index=0;
    int number;
    
    while(cin>>number)
    {
        list[index++] = number;
    }
    int count =1;
    while(1)
    {
        count = bubbleSort(list,index);
        if(count==0)
        {
            break;
        }
        printList(list,index);

        
    }
}