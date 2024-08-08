#include<bits/stdc++.h>
using namespace std;

int recur(int num,int time)
{
    if(time<=0)
    {
        return 1;
    }
    else
    {
        return num*recur(num,--time);
    }
}


int main()
{
    cout << recur(3,0);
}