#include <bits/stdc++.h>
using namespace std;
int recur(int m,int n)
{
    // cout << char(65 +(n));
    if(m==0)
    {
        return n+1;
        cout << endl;
    }
    else if(m>0 and n==0)
    {
        return recur(m-1,1);
    }
    else if(m>0 and n>0)
    {
        return recur(m-1,recur(m,n-1));
    }
    else
    {
        return 0;
    }

}
int main()
{
    // string c= "";
    //AB AB BA
    cout << recur(1,1);
}