#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[3]={1000,500,100};

    for(int i=0 ;i < 3 ; i++)
    {

        int dif= a/arr[i];
        a-=arr[i]*dif;
        printf("%d * %d\n",arr[i],dif);

        
    }
}