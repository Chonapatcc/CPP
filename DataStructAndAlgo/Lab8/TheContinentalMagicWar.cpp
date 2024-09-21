#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <limits>

using namespace std;

struct City {
    int troops;
    double assets;
    double lossRate;
    double gainRate;
    vector<int> connections;
};

struct State {
    vector<int> path;
    int currentCity;
    int remainingTroops;
    double totalAssets;
    
    bool operator<(const State& other) const {
        return totalAssets < other.totalAssets;
    }
};

vector<State> bestPaths;

void findBestPaths(const vector<City>& cities, int startTroops) {
    priority_queue<State> pq;
    pq.push({vector<int>{0}, 0, startTroops, 0.0});
    
    while (!pq.empty() && bestPaths.size() < 2000) {
        State current = pq.top();
        pq.pop();
        
        if (find_if(bestPaths.begin(), bestPaths.end(), 
                    [&](const State& s) { return s.path == current.path; }) == bestPaths.end()) {
            bestPaths.push_back(current);
        }
        
        for (int nextCity : cities[current.currentCity].connections) {
            int troopsAfterLoss = current.remainingTroops * (1 - cities[nextCity].lossRate / 100.0);
            
            if (troopsAfterLoss > cities[nextCity].troops) {
                int newTroops = troopsAfterLoss + cities[nextCity].troops * (cities[nextCity].gainRate / 100.0);
                double newAssets = current.totalAssets + cities[nextCity].assets;
                
                vector<int> newPath = current.path;
                newPath.push_back(nextCity);
                
                pq.push({newPath, nextCity, newTroops, newAssets});
            }
        }
    }
}

int main() {
    int startTroops, cityCount;
    cin >> startTroops >> cityCount;
    
    vector<City> cities(cityCount+1);
    
    for (int i = 0; i < cityCount; ++i) {
        cin >> cities[i].troops >> cities[i].assets >> cities[i].lossRate >> cities[i].gainRate;
    }
    
    for (int i = 0; i < cityCount; ++i) {
        int from, to;
        cin >> from >> to;
        if(from>to)
        {
            swap(from,to);
        }
        cities[from].connections.push_back(to);
    }
    
    findBestPaths(cities, startTroops);
    
    for (const auto& state : bestPaths) {
        cout << "Start";
        for (int city : state.path) {
            if (city != 0) {
                cout << " -> " << city;
            }
        }
        cout << " -> End" << endl;
    }
    
    return 0;
}