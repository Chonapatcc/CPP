#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[a];
    char t[a];
    int max=0;
    for(int i=0 ; i< a;i++)
    {
        cin>>t[i];
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    for(int i=max ; i>=0;i--)
    {
        for(int y=0 ; y<a;y++)
        {
            cout<<" ";
            if(arr[y]==i)
            {
                printf("(%d)",arr[y]);
                if(arr[y]<10)
                {
                    cout << " ";
                }
                continue;
            }
            else if(arr[y]>i)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }

            cout << " ";

            
        }
        cout <<endl;
    }

    for(int i=0 ;i<a;i++)
    {
        printf(" [%c] ",t[i]);
    }

}