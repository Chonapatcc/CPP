#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    cin >> n;

    string t,arr[n],temp;
    for(int i = 0;i<n;i++)
    {
        cin >> t;
        arr[i]=t;
    }
    
    for(int i = 0;i<n;i++)
    {
        for(int y =i+1;y<n;y++)
        {

            if(arr[i].length()>arr[y].length())
            {
                temp=arr[y];
                arr[y]=arr[i];
                arr[i]=temp;
            }

        }
    }

    for(int i =0 ; i< n;i++)
    {
        cout << arr[i] << endl;
    }
}