#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void miniMaxSum(vector<int> arr, long *minSum, long &maxSum)
{
    long min=0,max=0;
    int s=arr.size();
    for(int i =0 ; i<s;i++)
    {
        for(int y =i+1 ; y<s;y++)
            if(arr[i]>arr[y])
            {
                long temp = arr[i];
                arr[i]=arr[y];
                arr[y] = temp;
            }
    }
    

    for(int i =0 ; i<4; i++)
    {
        min+=arr[i];
    }
    for(int i =s-1 ; i>s-1-4;i--)
    {
        max+=arr[i];
    }
    *minSum = min;
    maxSum = max;
}

int main() {
    int n = 5;
    long min, max;
    vector<int> ar;

    for (int i = 0; i < n; ++i) {
        long temp;
        cin >> temp;
        ar.push_back(temp);
    }

    miniMaxSum(ar, &min, max);
    cout << min << " " << max << endl;
    return 0;
}