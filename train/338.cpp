#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int arr[13]  = {9, 11, 16, 19, 20, 21, 22, 29, 31, 39, 40, 90, 95};
    int ch=0;
    for(int i =0 ; i< 13; i++)
    {
        if(a==arr[i])
        {
            ch =1 ;
            break;
        }
    }
    if(ch)
    {
        cout <<"Found";
    }
    else
    {
        cout << "Not Found";
    }
}