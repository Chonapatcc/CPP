#include <iostream>
#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) 
{
    int left=0,right =0 ;
    int size =arr.size();
    for(int i=0 ; i<size;  i++)
    {
        left +=arr[i][i];
        right+=arr[size-i-1][i];
    }

    return abs(left-right);

}

int main() 
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n);

    for (int i = 0; i < n; ++i) {
        arr[i].resize(n);
        for (int j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }

    int result = diagonalDifference(arr);
    cout << result << endl;
    return 0;
}