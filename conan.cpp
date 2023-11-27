#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >>a;
    int list[]={1000,500,100,50,20,10,5,1};
    int n,sum;
    for(int i =0 ; i < sizeof(list)/sizeof(list[0]);i++)
    {
        n=a/list[i];
        a-=n*list[i];
        sum+=n*list[i];
        if(n)
        {
            if(list[i]==1000)
            {
                printf("ธนบัตร 1,000฿ : %d ฉบับ\n",n);
            }
            else if(list[i]>=20)
            {
                printf("ธนบัตร %d฿ : %d ฉบับ\n",list[i],n);
            }
            else
            {
                printf("เหรียญ %d฿ : %d เหรียญ\n",list[i],n);
            }
        }

    }
    string ss=to_string(sum);
    cout << "จำนวนเงินที่แลกทั้งหมด ";
    for(int i =0 ; i<ss.length();i++)
    {
        if((ss.length()-i)%3==0 and i!=0)
        {
            cout << "," << ss[i];
        }
        else
        {
            cout << ss[i];
        }
    }
    cout << " บาท";




}