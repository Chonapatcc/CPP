#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int dif=m/12,water;
    water=dif*1500;
    int temp;
    for(int i=0 ; i< n;i++)
    {
        cin>>temp;
        if(temp>=water)
        {
            printf("OK %d",dif);
        }
        else
        {
            printf("NOT OK %d",temp/1500);
        }
        cout <<endl;
    }
    
}