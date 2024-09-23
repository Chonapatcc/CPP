#include <bits/stdc++.h>
using namespace std;

class City
{
public:
    double army;
    double treasure;
    double lossRate;
    double gainRate;
};

map<int,City> cities;
map<int, vector<int>> connections;
vector<vector<int>> all_paths;
vector<int> pathWealthes;
double max_wealth = -1;


bool can_conquer(double &army, City &enemyCity)
{
    double currentArmy = army * (100 - enemyCity.lossRate)/100;
    double enemyArmy = enemyCity.army;
    return currentArmy > enemyArmy;
}

void dfs(int currentCity,double currentArmy,double currentWealth,vector<int> &path)
{
    path.push_back(currentCity);

    pathWealthes.push_back(currentWealth);
    all_paths.push_back(path);
    if(currentWealth > max_wealth)
    {
        max_wealth = currentWealth;
    }

    // cout << "head = " << currentCity <<endl;
    for(int child : connections[currentCity])
    {
        // cout << child <<endl;
        
        if(can_conquer(currentArmy,cities[child]))
        {
            // cout << child <<endl;
            dfs(child,currentArmy * (100 - cities[child].lossRate)/100 + cities[child].army * cities[child].gainRate/100,currentWealth + cities[child].treasure,path);
        }
    }
    path.pop_back();
}

int main()
{
    double startArmy;
    int city;
    cin >> startArmy >> city;

    for(int i=1 ; i<= city;i++)
    {
        double army,wealth,lossRate,gainRate;
        cin >> army >> wealth >> lossRate >> gainRate;
        cities[i] = City();
        cities[i].army = army;
        cities[i].treasure = wealth;
        cities[i].lossRate = lossRate;
        cities[i].gainRate = gainRate;
    }

    string line;
    while(getline(cin,line) and line !="end")
    {
        if(line.empty())
        {
            continue;
        }
        stringstream ss(line);
        int cityI,cityJ;
        ss >> cityI >> cityJ;

        connections[cityJ].push_back(cityI);
    }


    //for debug;
    // for(int i= 1 ; i<=city;i++)
    // {
    //     cout << cities[i].army << " " << cities[i].treasure << " " << cities[i].lossRate << " " << cities[i].gainRate <<endl;
    // }

    // for(int i=1 ; i<=  city; i ++)
    // {
    //     cout << "head  = "  << i <<endl;
    //     for(int child : connections[i])
    //     {
    //         cout << child <<endl;
    //     } 
    // }

    vector<int> path;
    dfs(0,startArmy,0,path);

    int counter =0 ;
    for(int i=0;i<all_paths.size();++i)
    {
        if(counter>=2000)
        {
            break;
        }
        if(pathWealthes[i] == max_wealth)
        {
            cout << "Start";
            for (int y = 1; y <all_paths[i].size(); ++y) {

                cout << " -> " << all_paths[i][y];
            }
            cout << " -> End" << endl;
            counter++;
        }
        
    }

    return 0;
}