#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    a[a.length()-1]=',';
    string temp="",arr[100];
    int ind=0;

    for(int i=1 ; i< a.length() ; i++)
    {
        if(a[i]==',')
        {
            arr[ind]=temp;
            temp="";
            ind++;
        }
        else if(a[i]==' ')
        {
            continue;
        }
        else
        {
            temp+=a[i];
        }
    }
    int ch=1;
    for(int i =0 ; i<ind-1 ; i++)
    {
        for(int y=i+1;y<ind ; y++)
        {
            if(arr[i]==arr[y])
            {
                ch=0;
                break;
            }
        }
        if(ch==0)
        {
            break;
        }
    }
    if(ch)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }
    
}