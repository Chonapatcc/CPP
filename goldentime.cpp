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
    int hour, minute,second,duration;
public:
    Time(int hour, int minute, int second):hour(hour),minute(minute),second(second){}
    
    Time(int duration):duration(duration){}

    int getDuration()
    {
        int dur = hour*60*60 + minute*60+second;

        return dur;
    }

    Time add(Time other)
    {
        Time *p = new Time(0,0,0);
        p->hour = hour+other.hour;
        p->minute = minute+other.minute;
        p->second = second+other.second;

        return *p;
    }

    int	subtract(Time other)
    {
        int dif = getDuration() - other.getDuration();
        int m=23*60*60+59*60+60;
        if(dif<0)
        {
            dif+=m;
        }

        return dif;
    }

    int	equals(Time other)
    {
        int time1 = getDuration();
        int time2 = other.getDuration();

        return time1==time2;
    }

    string toString()
    {
        string str="";
        stringstream x;

        x << setw(2) << setfill('0') << hour;
        x << ":"<< setw(2) << setfill('0') << minute;
        x << ":"<< setw(2) << setfill('0') << second;

        x>>str;
        return str;
    }
    //getter 
    int const getHour()
    {
        return hour;
    }
    int const getMinute()
    {
        return minute;
    }
    int const getSecond()
    {
        return second;
    }




};


int main()
{
    Time a(02,02,02),b(01,01,01);

    cout << a.getDuration() << endl;
    cout << b.getDuration() << endl;
    cout << b.subtract(a) <<endl;

    cout << b.toString() <<endl;

  

}