#include <bits/stdc++.h>
using namespace std;

int checkleap(int pyear)
{
    int ch=0;
    if(pyear%100==0)
    {
        if(pyear%400==0)
        {
            ch=1;
        }
    }
    else
    {
        if(pyear%4==0)
        {
            ch=1;
        }
    }
    return ch;
}

int main(void)
{
    int pyear= 1900;
    int year;
    
    cin>>year;

    int dif=year-pyear;

    int leap=0;
    while (pyear<year)
    {
        int x= checkleap(pyear);
       
        if(x)
        {
            leap++;
        }

        pyear ++;
    }

    int sumday=leap*366+(dif-leap)*365;

    string arr[7]={"mon","tue","wed","thu","fri","sat","sun"};

    int month_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int ch=checkleap(year);
    char month[12][10]={
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December" };

    if(ch)
    {
        month_day[1]++;
    }
    printf("year: %d\n",year);
    for(int i=0 ; i<12;  i++)
    {
        int x=sumday%7;
        int day=1;
        if(x==0)
        {
            printf("%s: Monday 1",month[i]);
        }
        else if(x==1)
        {
            printf("%s: Tuesday 1",month[i]);
        }
        else
        {
            day+=x;
            printf("%s: Monday %d",month[i],7-x+1);
        }
        cout <<endl;
        sumday+=month_day[i];



    }



    

}