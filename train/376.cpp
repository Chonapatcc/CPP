#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hour , minute ;
    char type[3];

    scanf("%d:%d %s",&hour,&minute,&type);

    for(int i =0 ;i<2; i++)
    {
        type[i] = tolower(type[i]);
    }

    if(strcmp(type,"am")==0)
    {
        if(hour>=12)
        {
            hour -=12 ;
        }
        
    }
    else
    {
        hour+=12;
        if(hour>=24)
        {
            hour -=12;
        }
    }

    //checker 

    



    printf("24-hour time is %02d:%02d",hour,minute);
}