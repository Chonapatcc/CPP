#include <bits/stdc++.h>
using namespace std;
void printNumber(int number)
{
    for(int i=0 ; i< number ;i++)
    {
        cout << number ;
    }
    for(int i=0 ; i< number-1 ;i++)
    {
        cout << number ;
    }
}

void printSpace(int spaces)
{
    for(int i= 0 ; i<spaces; i ++)
    {
        cout <<' ';
    }
    
}



int main()
{
    int a;
    cin>>a;

    for(int i= 1 ;i<=a; i++)
    {
        printSpace(a-i);
        printNumber(i);
        cout <<endl;
    }
    
}