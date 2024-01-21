#include<bits/stdc++.h>
using namespace std;


int main()
{
    double a,b;
    cin>>a>>b;
    double ans = a*b/2.0;
    long long int ans2 = a*b/2;
    //cout << ans << "  " << ans2 <<endl;
    if(ans==ans2)
    {
        cout << ans2;
    }
    else
    {
        cout << ans;
    }

    cout <<  " cm2";
    
}