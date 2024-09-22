#include <bits/stdc++.h>
using namespace std;


class City
{
public:
    int index;
    double army;
    double treasure;
    double lossRate;
    double gainRate;

    set<int> childs;
};


map<int, City*> cities;
vector<vector<int>> all_paths;
double max_wealth = -1;

bool can_conquer(City &currentCity, City &enemyCity) 
{
    double currentArmy = currentCity.army * (100 - enemyCity.lossRate)/100;
    double enemyArmy = enemyCity.army;
    return currentArmy > enemyArmy;
}

City updateCity(City currentCity, City enemyCity)
{
    double currentArmy= currentCity.army * (100 - enemyCity.lossRate)/100;
    double newArmy = enemyCity.army * enemyCity.gainRate/100;
    currentCity.army = currentArmy + newArmy;
    currentCity.treasure += enemyCity.treasure;
    return currentCity;
}

void dfs(City currentCity , vector<int> path,int cityIndex)
{
    path.push_back(cityIndex);


    if (currentCity.treasure > max_wealth or max_wealth == -1) 
    {
        max_wealth = currentCity.treasure;
        all_paths.clear();
        all_paths.push_back(path);
    } 
    else if (currentCity.treasure == max_wealth) 
    {
        all_paths.push_back(path);
    }
    for(int child : cities[cityIndex]->childs)
    {
        if(find(path.begin(), path.end(), child) == path.end() && can_conquer(currentCity, *cities[child]))
        {
            dfs(updateCity(currentCity, *cities[child]), path, child);
        }
    }
}

int main()
{
    double N;
    int C;
    cin >> N >> C;


    for(int i=0 ; i<= C;i++)
    {
        cities[i] = new City();
    }

    cities[0]->army = N;

    for (int i = 1; i <= C; ++i) 
    {
        cin >> cities[i]->army >> cities[i]->treasure >> cities[i]->lossRate >> cities[i]->gainRate;
        cities[i]->index = i;
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
        if(from>to)
        {
            cities[to]->childs.insert(from);
        }
        else
        {
            cities[from]->childs.insert(to);
        }
    }

    vector<int> path = vector<int>();
    dfs(*cities[0],path,0);


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
}