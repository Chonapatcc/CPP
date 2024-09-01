#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;
const int DAYS_PER_MONTH = 30;
const int MONTHS_PER_YEAR = 12;

int main() {
    int n, t;
    cin >> n;
    cin >> t;

    vector<vector<int>> adj(n + 1);
    int p1, p2;
    while (cin >> p1 && p1 != -1) {
        cin >> p2;
        adj[p1].push_back(p2);
        adj[p2].push_back(p1);
    }

    vector<int> infectedTime(n + 1, -1);
    infectedTime[1] = 0; // Assuming person 1 is the initial infected

    queue<int> q;
    q.push(1);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int neighbor : adj[curr]) {
            if (infectedTime[neighbor] == -1) {
                infectedTime[neighbor] = infectedTime[curr] + t;
                q.push(neighbor);
            }
        }
    }

    int maxTime = *max_element(infectedTime.begin(), infectedTime.end());

    int years = maxTime / (MINUTES_PER_HOUR * HOURS_PER_DAY * DAYS_PER_MONTH * MONTHS_PER_YEAR);
    maxTime %= (MINUTES_PER_HOUR * HOURS_PER_DAY * DAYS_PER_MONTH * MONTHS_PER_YEAR);
    int months = maxTime / (MINUTES_PER_HOUR * HOURS_PER_DAY * DAYS_PER_MONTH);
    maxTime %= (MINUTES_PER_HOUR * HOURS_PER_DAY * DAYS_PER_MONTH);
    int days = maxTime / (MINUTES_PER_HOUR * HOURS_PER_DAY);
    maxTime %= (MINUTES_PER_HOUR * HOURS_PER_DAY);
    int hours = maxTime / MINUTES_PER_HOUR;
    int minutes = maxTime % MINUTES_PER_HOUR;

    cout << years << " years "
         << months << " month "
         << days << " days "
         << hours << " hours "
         << minutes << " minutes" << endl;

    return 0;
}