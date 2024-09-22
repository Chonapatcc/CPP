#include <bits/stdc++.h>
using namespace std;

struct City 
{
    double troops;
    double wealth;
    double loss_percentage;
    double gain_percentage;
};

map<int, City> cities;
map<int, set<int>> connections;

vector<vector<int>> all_paths;
double max_wealth = 0;

bool can_conquer(double &current_troops, int &city_index) 
{
    return current_troops * (100 - cities[city_index].loss_percentage) / 100 > cities[city_index].troops;
}

void conquer(int current_city, double current_troops, double current_wealth, vector<int> path) 
{

    path.push_back(current_city);
    cout << current_city <<endl;
    if (current_wealth > max_wealth) 
    {
        max_wealth = current_wealth;
        all_paths.clear();
        all_paths.push_back(path);
    } 
    else if (current_wealth == max_wealth) 
    {
        all_paths.push_back(path);
    }

    for (int next_city : connections[current_city]) 
    {
        if (
            find(path.begin(), path.end(), next_city) == path.end() &&
            can_conquer(current_troops, next_city)) 
        {
            cout << next_city <<endl;   

        //     // cout << current_city  << " " << next_city <<endl;
            double new_troops = current_troops * (100 - cities[next_city].loss_percentage) / 100 +
                            cities[next_city].troops * cities[next_city].gain_percentage / 100;
            cout << current_troops << " " << new_troops <<endl;
            
             conquer(next_city, new_troops, current_wealth + cities[next_city].wealth,path);
        }
    }

    // path.pop_back();
}

int main() {
    double N;
    int C;
    cin >> N >> C;

    for(int i=0;i<=C;i++)
    {
        connections[i] = set<int>();
    }

    cities[0].troops = N; // Mathchester

    for (int i = 1; i <= C; ++i) 
    {
        cities[i] = City();
        cin >> cities[i].troops >> cities[i].wealth >> cities[i].loss_percentage >> cities[i].gain_percentage;
    }


    string line;
    int from, to;
    while(getline(cin, line)) 
    {
        if(line == "end")
        {
            break;
        }
        stringstream ss(line);
        ss >> from >> to;
        // cout << from << " " << to <<endl;
        connections[from].insert(to);
        connections[to].insert(from);
    }
    // cout << line << endl;
    // cout << from << " " << to <<endl;

    vector<int> path=vector<int>();
    conquer(0, N, 0,path);

    int count_paths = 0;
    for (const auto &p : all_paths) 
    {
        if(count_paths>=2000)
        {
            break;
        }
        cout << "Start";
        for (int i = 1; i < p.size(); ++i) {

            cout << " -> " << p[i];
        }
        cout << " -> End" << endl;
        count_paths++;
    }

    return 0;
}