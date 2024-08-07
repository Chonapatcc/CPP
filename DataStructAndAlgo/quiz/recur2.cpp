#include<bits/stdc++.h>
using namespace std;


int recur(int num)
{
    if (num==1)
    {
        return 0;
    }
    else if(num==2)
    {
        return 1;
    }
    else
    {
        return recur(num-1)+recur(num-2);
    }

}
int main()
{
    int x =recur(6);
    cout << x ;
}