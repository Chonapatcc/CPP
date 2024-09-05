#include <bits/stdc++.h>
#include <chrono>
using namespace std;


int minTime = -1;
vector<int> timeSave;
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

int bfs(int num)
{
    vector<bool> visited(n,false);
    queue<int> q;
    q.push(num);
    visited[num] = true;
    int time = 0;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << "is visited" <<endl;
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
    
    return time;
}


void printTimeArr()
{
    for(int i=0 ; i<n; i ++)
    {
        cout << timeSave[i]<< " ";
    }
    cout <<endl;
}

int main() {
    cin >> n;
    cin >> t;
    timeSave = vector<int>(n,0);
    adj = vector<vector<int>>(n,vector<int>());
    int p1, p2;
    while (cin >> p1 && p1 != -1) 
    {
        cin >> p2;
        vector<int>::iterator it1;
        it1 = find(adj[p1].begin(),adj[p1].end(),p2);
        vector<int>::iterator it2;
        it2 = find(adj[p2].begin(),adj[p2].end(),p1);
        if(it1 == adj[p1].end())
        {
            adj[p1].push_back(p2);
        }
        if(it2 == adj[p2].end())
        {
            adj[p2].push_back(p1);
        }
    }
    // printGraph(adj);
    for(int i=0 ; i< n ; i++)
    {   
        int x = bfs(i);
        cout << x << " end " << endl;
    }
    
    
    for(auto time: timeSave)
    {
        if(time!=0)
        {
            minTime = time*t;
            printAnswer();
            break;
        }
    }
    // printTimeArr();
    return 0;
}
