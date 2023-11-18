#include <bits/stdc++.h>
using namespace std;

int main()
{
    string test;
    getline(cin,test);
    string segment;
    stringstream t;


    
    string nt;

    for(int i =0;i<test.length();i++)
    {
        if(test[i]!='[' and test[i]!=']' and test[i]!=' ')
        {
            nt.push_back(test[i]);
        }
    }
    t << nt;
    int high=-50000;
    int temp;
    while(getline(t, segment, ','))
    {   
        temp=stoi(segment);
        if(temp>high)
        {
            high=temp;
        }
    }
    cout << high;
}