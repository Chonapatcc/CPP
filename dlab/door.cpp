#include <iostream>
using namespace std;

void move(int id ,int *rooms, int &n, int &min_time_usage,int time)
{
    if(id == n)
    {
        if(time < min_time_usage)
        {
            min_time_usage = time;
        }
        return;
    }
    if(time >= min_time_usage)
    {
        return;
    }
    if(rooms[id-1]!=0)
    {
        move(rooms[id-1],rooms,n,min_time_usage,time+1);
        move(id+1,rooms,n,min_time_usage,time+1);
    }
    else
    {
        move(id+1,rooms,n,min_time_usage,time+1);
    }
}


int main()
{
    int n;
    cin>>n;
    int *rooms = (int *)malloc((n+1)*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>> rooms[i];
    }

    int min_time_usage = n+1;
    move(1,rooms,n,min_time_usage,0);
    cout << min_time_usage << endl;
}