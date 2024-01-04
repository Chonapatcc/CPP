#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;



void func(int arr[])
{
    arr[2]=2;
}


int main()
{   
    int arr[10];
    
    func(arr);
    cout << arr[2];
}


