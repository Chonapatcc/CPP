#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin>>number;
    int count =0 ;

    for(int i =1 ;i<=number; i++)
    {
        string word =to_string(i);
        count += word.length() +1;
    }
    cout <<count;
}