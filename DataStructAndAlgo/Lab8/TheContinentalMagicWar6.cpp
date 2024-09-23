#include <bits/stdc++.h>
using namespace std;

class City 
{
public:
    double army, treasure, lossRate, gainRate;
};

vector<City> cities;
vector<vector<int>> connections;
vector<vector<int>> all_paths;
vector<double> pathWealthes;
double max_wealth = -1;

inline bool can_conquer(double army, const City& enemyCity) 
{
    return army * (100 - enemyCity.lossRate) > enemyCity.army * 100;
}

void dfs(int currentCity, double currentArmy, double currentWealth, vector<int>& path) {
    
    path.push_back(currentCity);

    if (currentWealth > max_wealth) 
    {
        max_wealth = currentWealth;
        all_paths.clear();
        pathWealthes.clear();
    }

    if (currentWealth == max_wealth) 
    {
        all_paths.push_back(path);
        pathWealthes.push_back(currentWealth);
    }

    for (int child : connections[currentCity]) 
    {
        if (can_conquer(currentArmy, cities[child])) 
        {
            double newArmy = currentArmy * (100 - cities[child].lossRate) / 100 + cities[child].army * cities[child].gainRate / 100;
            dfs(child, newArmy, currentWealth + cities[child].treasure, path);
        }
    }
    path.pop_back();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double startArmy;
    int cityCount;
    cin >> startArmy >> cityCount;

    cities.resize(cityCount + 1);
    connections.resize(cityCount + 1);

    for (int i = 1; i <= cityCount; i++) {
        cin >> cities[i].army >> cities[i].treasure >> cities[i].lossRate >> cities[i].gainRate;
    }

    string line;
    cin.ignore();
    while (getline(cin, line) && line != "end") {
        if (line.empty()) continue;
        int cityI, cityJ;
        sscanf(line.c_str(), "%d %d", &cityI, &cityJ);
        connections[cityJ].push_back(cityI);
    }

    vector<int> path;
    dfs(0, startArmy, 0, path);

    for (int i = 0; i < min(2000, (int)all_paths.size()); ++i) {
        cout << "Start";
        for (int y = 1; y < all_paths[i].size(); ++y) {
            cout << " -> " << all_paths[i][y];
        }
        cout << " -> End\n";
    }

    return 0;
}