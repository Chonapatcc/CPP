#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max = n*12;
    int len = to_string(max).length();
    for(int multi=1 ; multi<=12 ; multi++)
    {
        cout <<n <<" x "<<setfill(' ')<<setw(2)<<multi <<" = "<<setw(len) <<n*multi <<endl; 
    }
}