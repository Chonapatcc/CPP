#include <bits/stdc++.h>
using namespace std;

int main()
{
    string status;
    int num;
    cin>>status>>num;

    if(status=="false")
    {
        int tail;
        cin>>tail;
        cout <<"[1111]";
        for(int i= 0 ; i< num-1 ; i++)
        {
            cout << "-[1111]";
        }
        for(int i= 0 ; i< tail ; i++)
        {
            cout << "-[0000]";
        }
        
    }
    else
    {
        cout << "[1000]";
        for(int i =1 ; i<num-1; i++)
        {
            cout <<"-[0000]"; 
        }
        cout <<"-[0001]";
    }
}