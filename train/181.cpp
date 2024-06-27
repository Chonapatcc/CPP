#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >>a>>b;
    int ls[]={1000,500,20,5,1},ch=b-a,dif;
    printf("Total Change %d THB\n\n",ch);
    for(int i =0 ;i<5;i++)
    {
        if(ch>=ls[i])
        {
            dif=floor(ch/ls[i]);
            ch-=dif*ls[i];
            if(i<3)
            {
                printf("%d Bank Note : %d\n",ls[i],dif);
            }
            else
            {
                printf("%d coin : %d\n",ls[i],dif);
            }
            
        }
    }
}