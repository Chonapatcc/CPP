#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={8,14,112,76,2};
    int a,c=0;
    for(int i =0;i<5;i++)
    {
        cin >> a;
        for(int y=0;y<5;y++)
        {
            if(a==arr[y])
            {
                c++;
                arr[y]=0;
                break;
            }
        }
    }
    if (c>=3)
    {
        cout << "You are lucky";
    }
    else
    {
        cout << "You are unlucky";
    }
}