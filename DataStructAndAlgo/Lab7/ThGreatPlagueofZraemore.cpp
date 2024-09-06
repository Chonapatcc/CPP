#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;
const int DAYS_PER_MONTH = 30;
const int MONTHS_PER_YEAR = 12;
int n, t;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void printGraph(vector<vector<int>> &adj)
{
    for(int i =0 ; i<n ; i++)
    {
        cout << i <<" "  ;
        for(auto it : adj[i])
        {
            cout << it << " ";
        }
        cout <<endl;
    }
}

bool isOne(string t , int &num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num>1)
    {
        t +='s';
    }
    cout << num << " " << t <<" " ;
    return 1;
}

void printAnswer(int minTime)
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
    int count = 0;
    count+= isOne("year",years);
    count+= isOne("month",months);
    count+=isOne("day",days);
    count+=isOne("hour",hours);
    count+= isOne("minute",minutes);
    if(count == 0)
    {
        cout <<  "0 minutes";
    }
}

bool AllIsVisited(vector<bool> &visited)
{
    for(auto it : visited)
    {
        if(it == false)
        {
            return false;
        }
    }
    return true;
}

int bfs(int num,vector<bool> &visited)
{
    queue<int> q;
    q.push(num);
    visited[num] = true;
    int time = 0;
    while(!q.empty())
    {
        if(AllIsVisited(visited))
        {
            return time;
        }
        int x = q.front();
        q.pop();
        // cout << x << "is visited" <<endl;
        for(auto it : adj[x])
        {
            if(visited[it] == false)
            {
                q.push(it);
                visited[it] = true;
            }
        }
        time++;
    }
    return time ;
}

int startFrom(int num)
{
    vector<bool> visited(n,false);
    int time = bfs(num,visited);
    return time;
}

int main() {
    cin >> n;
    cin >> t;
    adj = vector<vector<int>>(n,vector<int>());
    int p1, p2;
    while (cin >> p1 && p1 != -1) 
    {
        cin >> p2;
        adj[p1].push_back(p2);
        adj[p2].push_back(p1);
    }
    // printGraph(adj);
    int time = -1;
    for(int i=0 ; i< n ; i++)
    {   
        int time2 =startFrom(i);
        // cout << time2<<endl;
        if(time == -1 or time2<time)
        {
            time = time2;
        }
    }
    time-=1;
    time*=t;
    printAnswer(time);
    return 0;
}
