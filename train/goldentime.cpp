#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time
{
private:
    int hour, minute,second;
public:
    Time(int hour, int minute, int second):hour(hour),minute(minute),second(second)
    {
    }
    
    Time(int duration)
    {
        hour = duration/(60*60);
        duration-= hour*60*60;
        minute = duration/60;
        duration-=minute*60;
        second = duration;
        if(hour>=24)
        {
            hour -=24;
        }
    }

    Time add(Time other)
    {
        Time *p = new Time(0,0,0);
        p->hour = hour+other.hour;
        p->minute = minute+other.minute;
        p->second = second+other.second;
        if(p->second>=60)
        {
            p->minute+=1;
            p->second-=60;
        }
        if(p->minute>=60)
        {
            p->hour+=1;
            p->minute-=60;
        }
        if(p->hour>=24)
        {
            p->hour-=24;
        }
        return *p;
    }

    int subtract(Time other)
    {
        int dif = getDuration() - other.getDuration();
        int m=24*60*60;
        if(dif<0)
        {
            dif+=m;
        }

        return dif;
    }

    int	equals(Time other)
    {
        int t1=getDuration();
        int t2=other.getDuration();
        
        return t1==t2;
    }

    string toString()
    {
        string str="";
        if(hour<10)
        {
            str+="0"+to_string(hour);
        }
        else
        {
            str+=to_string(hour);
        }
        str+=':';
        if(minute<10)
        {
            str+='0'+to_string(minute);
        }
        else
        {
            str+=to_string(minute);
        }
        str+=':';

        if(second<10)
        {
            str+='0'+to_string(second);
        }
        else
        {
            str+=to_string(second);
        }


        return str;
    }
    //getter 
    int getHour() const
    {
        return hour;
    }
    int getMinute() const
    {
        return minute;
    }
    int getSecond() const
    {
        return second;
    }

    int getDuration() const
    {
        int dur = hour*60*60 + minute*60+second;

        return dur;
    }

    // setter
    void setHour(int h)
    {
        hour=h;
    }
    void setMinute(int m) 
    {
        minute = m;
    }
    void setSecond(int s)
    {
        second = s;
    }

};


int main()
{
    Time a(2,2,2),b(01,01,01);

    Time c(24*60*60);
    cout << c.toString();
    fflush(stdout);


  

}