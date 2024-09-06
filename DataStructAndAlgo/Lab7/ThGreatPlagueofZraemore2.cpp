#include <bits/stdc++.h>
using namespace std;

const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;
const int DAYS_PER_MONTH = 30;
const int MONTHS_PER_YEAR = 12;

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
void printGraph(vector<vector<int>> &adj)
{
    for(int i =0 ; i<adj.size();i++)
    {
        cout << i <<" -> "  ;
        for(auto it : adj[i])
        {
            cout << it << " ";
        }
        cout <<endl;
    }
}

void bfs(vector<vector<int>> &adj,vector<int> &visited,int num,int type)
{
    queue<int> q;
    q.push(num);
    visited[num] = type;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(auto it : adj[x])
        {
            if(visited[it] == -1)
            {
                visited[it] = type;
                q.push(it);
            }
        }
    }
}

void printType(vector<int> &visited)
{
    for(auto it : visited)
    {
        cout << it << " ";
    }
    cout <<endl;
}

int bfsWithLevel(int num,vector<vector<int>> &adj)
{
    vector<int> vec1;
    vec1.push_back(num);
    vector<int> visited(adj.size(),0);
    visited[num] = 1;
    int time = 0;
    while(!vec1.empty())
    {
        vector<int> vec2;
        for(auto it : vec1)
        {
            // cout << it << " -> ";
            for(auto it2 : adj[it])
            {
                if(visited[it2] == 0)
                {
                    vec2.push_back(it2);
                    visited[it2] = 1;
                }
            }
            
        }
        vec1 = vec2;
        time++;
    }
    // cout << endl;
    return time ;
}

int startFrom(vector<int> &nodeType,int type,vector<vector<int>> &adj)
{
    int minTime =-1;
    for(int i=0 ; i<nodeType.size();i++)
    {
        if(nodeType[i] == type)
        {
            int finder = bfsWithLevel(i,adj);
            // cout << finder <<endl;
            if(finder < minTime or minTime == -1)
            {
                minTime = finder;
            }
        }
    }
    return minTime;
}

int main()
{
    int n;
    long long int t;
    cin >> n;
    cin >> t;
    vector<vector<int>> adj(n,vector<int>());
    int p1, p2;
    while (cin >> p1 && p1 != -1) 
    {
        cin >> p2;
        if(p1!=p2)
        {
            adj[p1].push_back(p2);
            adj[p2].push_back(p1);
        }
    }
    // printGraph(adj);
    vector<int> nodeType(n,-1);
    int type = 0 ;
    long long int maxTime = -1;
    for(int i=0 ;i<n;i++)
    {
        if(nodeType[i] == -1)
        {
            bfs(adj,nodeType,i,type);
            int minTime = startFrom(nodeType,type,adj);
            // cout << "minTime :" <<type<<" = " <<minTime <<endl;
            if(minTime > maxTime or minTime == -1)
            {
                maxTime = minTime;
            }
            type++;
        }
    }
    // cout << maxTime <<endl;
    maxTime -= 1;
    maxTime*=t;
    // cout << maxTime <<endl;
    printAnswer(maxTime);
    return 0;
}

