#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void printCube(const vector<vector<vector<double>>>& cube,int n)
{
    for (int x = 0; x < n; x++) 
    {
        for (int y = 0; y < n; y++) 
        {
            for (int z = 0; z < n; z++) 
            {
                cout << cube[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

void recur(vector<vector<vector<double>>>& cube,int n,int x,int y,int z,double intensity)
{
    if (x < 0 || x >= n || y < 0 || y >= n || z < 0 || z >= n || intensity <= 0 || intensity <= cube[x][y][z] ) 
    {
        return;
    }
    cube[x][y][z] = intensity;
    for (int i = -1; i < 2; i++) 
    {
        for (int j = -1; j < 2; j++) 
        {
            for (int k = -1; k < 2; k++) 
            {
                recur(cube,n,x + i,y + j,z + k,intensity - 1);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<vector<double>>> cube(n, vector<vector<double>>(n, vector<double>(n, 0)));
    int x, y, z;
    double intensity;
    string line;

    while(getline(cin,line) and line!="end")
    {
        stringstream ss(line);
        ss >> x >> y >> z >> intensity;
        recur(cube,n,x,y,z,intensity);
    }
    printCube(cube,n);
    return 0;
}