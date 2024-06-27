#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[]={};
    int x =0 ;
    int n[]={};
    cin>>arr[x];

    while(arr[x]!='-')
    {   
        n[x]=arr[x]-'0';
        if(arr[x]=='0')
        {
            cout <<"Error! Not have this floor";
            exit(0);
        } 
        x++;
        cin>>arr[x];

    }

    for(int i=0 ; i< x ;i ++)
    {
        for(int y=i+1 ; y<x;y++)
        {
            if(n[i]>n[y])
            {
                char temp = n[i];
                n[i]=n[y];
                n[y]=temp;
            }
        }
    }
    printf("OK! Wait please\n---------------\nLift is arriving!\n");
    for(int i=0 ; i<x; i++)
    {   
        cout << n[i] <<endl;
        //printf("---------------\nLift is going up!\n---------------\nLift has reached the %dst floor!\n",arr[i]);
    }
}