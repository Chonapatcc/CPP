#include <iostream>
#include <vector>

using namespace std;
int minTime =-1;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;
const int DAYS_PER_MONTH = 30;
const int MONTHS_PER_YEAR = 12;
int n, t;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void printGraph(vector<vector<bool>> &adj)
{
    int size = n;

    cout << " " ;
    for(int i= 0 ; i<size; i++)
    {
        cout << " " << i;
    }
    cout <<endl;
    for(int i=0;i<size;i++)
    {
        cout << i << " ";
        for(int y =0 ;y<size;y++)
        {
            cout<<adj[i][y]<<" ";
        }
        cout<<endl;
    }
}

void printInfected(vector<bool> &infected)
{

    for(int i= 0 ; i<n; i++)
    {
        cout << infected[i]  << " ";
    }
    cout <<endl;
}

bool allInfected(vector<bool> &infected)
{
    int count =0 ;
    int all =n;
    for(int i =0 ; i<all;i++ )
    {
        if(infected[i] == 1)
        {
            count++;
        }
    }
    return (count == all);
}

int setInfected(vector<bool> &infected,vector<bool> &adj)
{
    int count = 0;
    for(int i =0; i<n;i++)
    {
        if(adj[i] == 1 and infected[i] == 0)
        {
            infected[i] = 1;
            count ++;
        }
    }
    return count;
}

void recur(vector<vector<bool>> &adj,vector<bool> &infected,int &time)
{
    // printInfected(infected);
    if(allInfected(infected))
    {
        int ntime = time*t;
        if(ntime < minTime or minTime == -1)
        {
            minTime = ntime;
        }
        return;
    }
    else
    {
        vector<bool> oldInfected = infected;
        int moreInfect;
        for(int i=0 ;i<n;i++)
        {
            if(oldInfected[i] == 1)
            {
                moreInfect += setInfected(infected,adj[i]);
            }
        }
        if(moreInfect==0)
        {
            return ;
        }
        time++;
        recur(adj,infected,time);
    }
}

void isOne(string t , int &num)
{
    if(num==0)
    {
        return ;
    }
    else if(num>1)
    {
        t +='s';
    }

    cout << num << " " << t <<" " ;

}

void printAnswer()
{
    // minTime = 1*2671340;
    int years = minTime / (MINUTES_PER_HOUR * HOURS_PER_DAY * DAYS_PER_MONTH * MONTHS_PER_YEAR);
    minTime %= (MINUTES_PER_HOUR * HOURS_PER_DAY * DAYS_PER_MONTH * MONTHS_PER_YEAR);
    int months = minTime / (MINUTES_PER_HOUR * HOURS_PER_DAY * DAYS_PER_MONTH);
    minTime %= (MINUTES_PER_HOUR * HOURS_PER_DAY * DAYS_PER_MONTH);
    int days = minTime / (MINUTES_PER_HOUR * HOURS_PER_DAY);
    minTime %= (MINUTES_PER_HOUR * HOURS_PER_DAY);
    int hours = minTime / MINUTES_PER_HOUR;
    int minutes = minTime % MINUTES_PER_HOUR;

    isOne("year",years);
    isOne("month",months);
    isOne("day",days);
    isOne("hour",hours);
    isOne("minute",minutes);

}

int counter =0 ;

void dynamicBro(vector<vector<bool>> &adj , vector<bool> &infected)
{
    counter = (counter +(n/3) ) % n ;
    for(int i=0 ; i<n ;i++)
    {
        // cout << i <<endl;
        if(infected[i] == 1)
        {
            continue;
        }
        vector<bool> copyInfected(infected);
        copyInfected[i] = 1;
        // cout << "start " << i<< endl;
        // printGraph(adj);
        int time = 0;
        recur(adj,copyInfected,time);
        // cout << "end" <<endl;
    }
    if(minTime!=-1)
    {
        printAnswer();
        return;
    }
    infected[counter] =1;
    dynamicBro(adj,infected);
}

int main() {
    cin >> n;
    cin >> t;

    vector<vector<bool>> adj(n,vector<bool>(n,0));
    int p1, p2;
    while (cin >> p1 && p1 != -1) 
    {
        cin >> p2;
        adj[p1][p2] = 1;
        adj[p2][p1] = 1;
    }
    // placement(adj);
    // printGraph(adj);

    vector<bool> infected(n,0);
    // start
    dynamicBro(adj,infected);
    return 0;
}