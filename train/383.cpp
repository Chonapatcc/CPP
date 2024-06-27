#include <bits/stdc++.h>
using namespace std;

int main()
{
    int min;
    cin>>min;

    int day=0 , hour=0 ;
    day = min/(24*60);
    min -= day*(24*60);
    hour = min/60;
    min -= hour*60;

    printf("Last online:");
    if(day>0)
    {
        string space="";
        if(day>1)
        {
            space="s";
        }
        printf(" %d day",day);
        cout <<space;
    }
    if(hour >0)
    {
        string space="";
        if(hour>1)
        {
            space="s";
        }
        printf(" %d hour",hour);
        cout <<space;

    }
    if(min>0)
    {
        string space="";
        if(min>1)
        {
            space="s";
        }
        printf(" %d minute",min);
        cout <<space;

    }
    cout <<" ago.";
}