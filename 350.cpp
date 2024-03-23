#include <bits/stdc++.h>
using namespace std;


void printStar(int n )
{
    for(int i =0 ; i < n ;i++)
    {
        cout << "*";
    }
}

void printSpace(int n)
{
    for(int i =0 ; i< n ;i++)
    {
        cout << ' ';
    }
}



int main()
{
    int a;
    cin>>a;

    for(int i =1; i <=a; i ++)
    {
        printSpace(a-i);
        printStar(a+1);
        cout <<endl;
    }


}