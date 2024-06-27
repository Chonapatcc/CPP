#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int arr[100],c=1; 
    arr[0]=2;
    for(int i =2; i <=a ; i++)
    {
        int ch=1;
        for(int y =0 ; y<c; y++)
        {
            if(i%arr[y]==0)
            {
                ch=0;
                break;
            }
        }
        if(ch)
        {
            arr[c]=i;
            c++;
        }
    }
    cout << "[" << arr[0];
    for(int i =1 ; i< c ; i++)
    {
        cout << ", " << arr[i]; 
    }
    cout << ']';
}