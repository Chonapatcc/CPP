#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    a[a.length()-1]=',';
    int arr[100] , x=0,c=0 ,sign=0;
    for(int i=1 ; i< a.length(); i++)
    {
        if(a[i]=='-')
        {
            sign=1;
            continue;
        }
        if(a[i]==',')
        {
            if(sign)
            {
                x=-x;
            }
            arr[c]=x;
            sign=0;
            c++;
            x=0;
        }
        else
        {
            x=x*10+(a[i]-'0');
        }
    }
    for(int i=0 ; i< c; i++)
    {
        for(int y =i +1 ; y<c ;y++)
        {
            if(arr[i]<arr[y])
            {
                int x;
                x=arr[i];
                arr[i]=arr[y];
                arr[y]=x;
            }
        }
    }
    for(int i=0 ; i< c; i++)
    {
        cout << arr[i]<< " ";
    }
}