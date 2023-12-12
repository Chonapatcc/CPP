#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,dif;
    cin>>a >> b;

    dif=b-a;
    cout << "change: " << dif <<endl;
    int x,y;

    int arr1[5] ,arr2[5];
    for(int i =0 ;i <6; i++)
    {
        cin>>x>>y;
        //cout << x<<y <<endl;
        int val=0;
        if(dif>=x)
        {
            val=dif/x;
        }
        if(val>y)
        {
            
            val=y;
        }
        if(val>0)
        {
            printf("cash: %d amount: %d\n",x,val);
        }
        
        dif-=val*x;


    }


}