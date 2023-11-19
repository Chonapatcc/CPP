#include <bits/stdc++.h>
using namespace std;

int recur(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return recur(n-1)+100;
    }

}
int main()
{
    int a;
    cin >>a;
    if(a<0)
    {
        cout << -1;
    }
    else
    {
        cout << recur(a);
    }
    
    
    
}