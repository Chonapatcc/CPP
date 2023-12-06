#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,sum=0;
    cin >> n;
    int ls[]={100000,300000,500000,1000000};
    int ls2[]={0,10,15,20,};
    int per;
    bool ch=true;
    for(int i =0;i<n;i++)
    {
        cin >>temp;
        ch=true;
        for(int y=0; y<4 ; y++)
        {
            if(temp<=ls[y])
            {
                ch=false;
                per=ls2[y];
                break;
            }
        }
        if(ch)
        {
            per=25;
        }
        sum+=temp*per/100;

    }
    if(!sum)
    {
        cout << "ไม่ต้องเสียภาษี";
    }
    else
    {
        printf("เสียภาษีทั้งหมด %d กะลา",sum);
    }
    
    
}