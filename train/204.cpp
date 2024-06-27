#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,temp="";
    getline(cin ,a);
    int arr[100] , n=0;
    for(int i =1 ;i < a.length(); i ++)
    {
        if(a[i]==',' or a[i]==']')
        {
            arr[n]=stoi(temp);
            
            temp="";
            n++;
        }
        else
        {
            temp+=a[i];
        }
    }
    int sum=0;
    bool ch=true;
    for(int i=0 ; i< n; i++)
    {
        sum=0;
        for(int y=0  ;y<n;y++)
        {
            if(i==y)
            {
                continue;
            }
            sum+=arr[y];
        }
        if(arr[i]>=sum)
        {
            ch=false;
            break;
        }
    }
    if(ch)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}