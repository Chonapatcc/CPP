#include<bits/stdc++.h>
using namespace std;


int recur(int last,int times)
{
    times--;
    if(times<=0)
    {
        return last;
    }
    else
    {
        return recur(last+3,times);
    }


}
int main()
{
    int x =recur(2 , 5);
    cout << x ;
}