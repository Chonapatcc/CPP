#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,val;
    cin >> p;
    int m=-100000,n=100000 , sum=0;
    for(int i =0 ; i< p ; i++)
    {
        cin >> val;
        if (val>m)
        {
            m=val;
        }
        if(val<n)
        {
            n=val;
        }
        sum+=val;
    }
    sum/=p;
    int h1,m1,s1 , h2,m2,s2 , h3,m3,s3;

    h1=floor(m/3600);
    m-=h1*3600;
    m1=floor(m/60);
    m-=m1*60;
    s1=m;
    
    h2=floor(n/3600);
    n-=h2*3600;
    m2=floor(n/60);
    n-=m2*60;
    s2=n;

    h3=floor(sum/3600);
    sum-=h3*3600;
    m3=floor(sum/60);
    sum-=m3*60;
    s3=sum;

    printf("Winner : %d hr %d min %d sec\n",h1,m1,s1);
    printf("Loser : %d hr %d min %d sec\n",h2,m2,s2);
    printf("Average : %d hr %d min %d sec\n",h3,m3,s3);
}