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

   

    Time add(Time other)
    {
        Time *p = new Time(0,0,0);
        p->hour = hour+other.hour;
        p->minute = minute+other.minute;
        p->second = second+other.second;
        p->hour%=24;
        p->minute%=60;
        p->second%=60;
        return *p;
    }

    int	subtract(Time other) const
    {
        int dif = getDuration() - other.getDuration();
        int m=23*60*60+59*60+60;
        if(dif<0)
        {
            dif+=m;
        }
        if(dif>m)
        {
            dif%=m;
        }

        return dif;
    }

    int	equals(Time other) const
    {
        int time1 = getDuration();
        int time2 = other.getDuration();

        return time1==time2;
    }

    string toString() const
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
    int getHour() const
    {
        return hour;
    }
    int getMinute() const
    {
        return minute;
    }
    int  getSecond() const
    {
        return second;
    }

    int getDuration() const
    {
        int dur = hour*60*60 + minute*60+second;

        return dur;
    }




};


int main()
{
    Time a(12,12,12),b(01,01,01);

    cout << a.getDuration() << endl;
    cout << b.getDuration() << endl;
    cout << b.subtract(a) <<endl;

    cout << a.toString() <<endl;

    Time c = a.add(a) ; 
    cout << c.toString() <<endl;

  

}