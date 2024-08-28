#include <bits/stdc++.h>
using namespace std;
void printSet(const set<int>& s) 
{
    if(s.size()==0)
    {
        cout << "{ }" <<endl;
        return ; 
    }
    cout << "{";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it;
        if (next(it) != s.end()) {
            cout << ", ";
        }
    }
    cout << "}" <<endl;
}
int main()
{
    set<int> arrSave[3];
    string line;
    int maxVal = 0;
    while (getline(cin, line) && line != "---") {
        stringstream ss(line);
        char name, eq, ob, cb;
        ss >> name >> eq >> ob;
        int id = name-'A';
        int num;
        while (ss >> num) {
            arrSave[id].insert(num);
            maxVal = max(maxVal, num);
            ss >> cb;
        }
    }
    printSet(arrSave[0]);
    printSet(arrSave[1]);
    printSet(arrSave[2]);
}