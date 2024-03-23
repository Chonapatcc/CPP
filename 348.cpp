#include <bits/stdc++.h>
using namespace std;

void printStar(int n )
{
    for(int i= 0 ; i < n ;i++)
    {
        cout << "*";
    }

}

void printSpace(int n)
{
    for(int i= 0; i < n ;i++)
    {
        cout << " ";
    }
}

int main()
{
    int a;
    cin>>a;
    a+=1;
    for(int i =1 ; i<a  ; i++)
    {
        printStar(i);
        printSpace(a-i);
        printSpace(a-i-1);
        printStar(i);
        cout <<endl;
    }
    printStar(a);
    printStar(a-1);
    cout <<endl;
    for(int i =2 ; i<=a  ; i++)
    {
        printStar(a-i+1);
        printSpace(i-1);
        printSpace(i-1-1);
        printStar(a-i+1);
        cout <<endl;
    }


}