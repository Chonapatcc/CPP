#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int birthdayCakeCandles(vector<int> candles) 
{
    int max=0;
    int c=0 ; 

    for(int i=0 ; i<candles.size() ; i++)
    {
        if(candles[i]>max)
        {
            c=1;
            max=candles[i];
        }
        else if(candles[i]==max)
        {
            c++;
        }
    }
    return c;
}

int main() 
{
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        ar[i] = temp;
    }

    int result = birthdayCakeCandles(ar);
    cout << result << endl;
    return 0;
}