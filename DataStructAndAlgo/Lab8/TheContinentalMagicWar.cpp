#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

struct City {
    int soldiers;
    int wealth;
    int loss_percentage;
    int gain_percentage;
};

vector<City> cities;
vector<set<int>> connections;
vector<vector<int>> best_paths;
int max_wealth = 0;

bool canConquer(int &current_soldiers, int &city_index) {
    return (current_soldiers * (100 - cities[city_index].loss_percentage) / 100) > cities[city_index].soldiers;
}

int calculateNewSoldiers(int &current_soldiers, int &city_index) {
    return current_soldiers * (100 - cities[city_index].loss_percentage) / 100 + 
           cities[city_index].soldiers * cities[city_index].gain_percentage / 100;
}

void conquer(int current_city, int current_soldiers, int current_wealth, vector<int>& current_path) {
    if (current_wealth > max_wealth) {
        max_wealth = current_wealth;
        best_paths.clear();
        best_paths.push_back(current_path); 
    } else if (current_wealth == max_wealth) {
        best_paths.push_back(current_path); 
    }

    for (int next_city : connections[current_city]) {
        if (canConquer(current_soldiers, next_city)) {
            
            current_path.push_back(next_city);
            conquer(next_city, calculateNewSoldiers(current_soldiers, next_city), 
                    current_wealth + cities[next_city].wealth, current_path);
            current_path.pop_back(); 
        }
    }
}

int main() {
    int N, C;
    cin >> N >> C;

    cities.resize(C + 1);
    connections.resize(C + 1);

    for (int i = 1; i <= C; i++) {
        cin >> cities[i].soldiers >> cities[i].wealth >> cities[i].loss_percentage >> cities[i].gain_percentage;
    }

    for (int i = 1; i <= C; i++) {
        int from, to;
        cin >> from >> to;
        if(from>to)
        {
            swap(from,to);
        }
        connections[from].insert(to);
    }

    vector<int> initial_path = {0}; 
    conquer(0, N, 0, initial_path);

    for (const auto& path : best_paths) {
        cout << "Start";
        for (int city : path) {
            if (city != 0) {
                cout << " -> " << city;
            }
        }
        cout << " -> End" << endl;
    }


    return 0;
}