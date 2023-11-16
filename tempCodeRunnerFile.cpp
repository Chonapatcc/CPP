#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string temp=to_string(n);
    int sum;
    while (n>9)
    {
        sum=0;
        for(int i =0 ;i<temp.length();i++)
        {
            sum+=temp[i]-'0';
        }
        n=sum;
        temp=to_string(sum);
    }
    cout << n;
}