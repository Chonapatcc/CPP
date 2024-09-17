#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> visitedPaths = {{1,2,3,4},{4,3,2,1}};

bool isPathUnique(const vector<int>& path, int start) 
{
  return find(visitedPaths.begin(), visitedPaths.end(), path) == visitedPaths.end();
}


int main()
{

    vector<int> v = {4,3,2,1};
    isPathUnique(v,1);

    cout << isPathUnique(v,1);


    return 0;

}