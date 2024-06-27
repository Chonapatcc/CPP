#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,5,7,9,11,13,15,17,19,21,23,25,27,29};
    int a;
    cin>>a;
    bool ch=false;
    for(int i =0 ; i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        if(a==arr[i])
        {
            cout << i;
            ch=true;
            break;
        }
    }
    if(!ch)
    {
        cout << -1;
    }
}
