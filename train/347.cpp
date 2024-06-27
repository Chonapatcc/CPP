#include <bits/stdc++.h>
using namespace std;


void printSpace(int n )
{
    for(int i =0 ; i< n ;i++)
    {
        cout << ' ';
    }
}

void printStar(int n )
{
    for(int i =0 ; i < n ; i++)
    {
        cout << '*';
    }
    for(int i =0 ; i < n-1 ; i++)
    {
        cout << '*';
    }
    cout <<endl;
}
int main()
{
    int a;
    cin>>a;

    for(int i =1  ; i <=a; i ++)
    {
        printSpace(a-i);
        printStar(i);
    }
    for(int i =1  ; i <=a; i ++)
    {
        printSpace(i-1);
        printStar(a-i+1);
    }
}