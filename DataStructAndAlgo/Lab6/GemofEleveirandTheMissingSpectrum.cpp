#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> spectrum(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> spectrum[i];
    }
    int left = 0;
    int right = n - 1;
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (spectrum[mid] == mid + 1)
        {
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;
        }
    }
    cout << left + 1 << endl;
    return 0;
}