#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int arr[100],c=0; 
    string temp="";
    for(int i =1 ; i < a.length()-1 ;i++)
    {
        if(a[i]==',')
        {
            arr[c]=stoi(temp);
            temp="";
        }
        else
        {
            temp+=a[i];
        }
    }
}