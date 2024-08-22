#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;
void printSet(const set<int>& s) {
    cout << "{";
    auto it = s.begin();
    if (it != s.end()) {
        cout << *it;
        ++it;
    }
    for (; it != s.end(); ++it) {
        cout << ", " << *it;
    }
    cout << "}";
    cout << endl;
}


set<int> getComplement(const set<int>& s, int maxVal) {
    set<int> complementSet;
    for (int i = 0; i <= maxVal; ++i) {
        if (s.find(i) == s.end()) {
            complementSet.insert(i);
        }
    }
    return complementSet;
}

int main() {
    set<int> A, B, C;
    string inputLine;
    int maxVal = 0;

    getline(cin, inputLine);

    while (getline(cin, inputLine) && inputLine != "---") {
        stringstream ss(inputLine);
        char setName, eqSign, openBrace, closeBrace;
        int element;

        ss >> setName >> eqSign >> openBrace;
        while (ss >> element) {
            if (setName == 'A') A.insert(element);
            else if (setName == 'B') B.insert(element);
            else if (setName == 'C') C.insert(element);
            maxVal = max(maxVal, element);
            ss >> closeBrace; 
        }
    }

    while (getline(cin, inputLine)) {
        if (inputLine.find("union") != string::npos) {
            set<int> resultSet = A; 
            resultSet.insert(B.begin(), B.end());
            printSet(resultSet);
        } else if (inputLine.find("intersection") != string::npos) {
            set<int> resultSet;
            set_intersection(A.begin(), A.end(), B.begin(), B.end(),
                             inserter(resultSet, resultSet.begin()));
            printSet(resultSet);
        } else if (inputLine.find("complement") != string::npos) {
            set<int> resultSet = getComplement(A, maxVal);
            printSet(resultSet);
        } else if (inputLine.find("difference") != string::npos) {
            set<int> complementA = getComplement(A, maxVal);
            set<int> resultSet;
            set_difference(B.begin(), B.end(), complementA.begin(), complementA.end(),
                           inserter(resultSet, resultSet.begin()));
            printSet(resultSet);
        } else if (inputLine.find("size") != string::npos) {
            set<int> resultSet;
            set_intersection(A.begin(), A.end(), C.begin(), C.end(),
                             inserter(resultSet, resultSet.begin()));
            cout << resultSet.size();
        }
        cout << endl;
    }

    return 0;
}