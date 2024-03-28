#include <bits/stdc++.h>
using namespace std;

void printStar(int n)
{
    for(int i= 0 ; i<n ;i++)
    {
        cout << '*';
    }
    cout <<endl;
}

void printSpace(int n)
{
    for(int i= 0 ; i<n ;i++)
    {
        cout << ' ';
    }
}
int main()
{
    int n;
    cin>>n;
    
    for(int i =1 ; i<=n ;i++)
    {
        printSpace(n-i);
        printStar(i);
        printStar(i);
    }
    

}