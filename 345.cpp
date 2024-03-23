#include <bits/stdc++.h>
using namespace std;


void printSpace(int n )
{
    for(int i =0 ; i< n ;i++)
    {
        cout << ' ';
    }
}

void printAlpha(int n )
{
    for(int i =0 ; i < n ; i++)
    {
        cout << char(65+n-1);
    }
    for(int i =0 ; i < n-1 ; i++)
    {
        cout << char(65+n-1);
    }
}

int main()
{
    int a;
    cin>>a;
    for(int i =1  ;i <=a ; i++)
    {
        printSpace(a-i);
        printAlpha(i);
        cout <<endl;
    }
}