#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int ls[a],ind=1,n=2,temp,l[]={3,11,19};
    ls[0]=1;

    while(ind<a)
    {
        //cout << n <<endl;
        temp=n;
        for(int i =0 ;i<3;i++)
        {
            while(temp%l[i]==0)
            {
                temp/=l[i];
            }
        }
        if(temp==1)
        {
            
            ind++;
        }
        n++;
    }
    cout <<n-1;
    
}