#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n300,n100, n50 , n0;
    cin>>n300>>n100>>n50>>n0;
    cout << fixed << setprecision(2) << (n300*300+n100*100+n50*50)/(300*(n300+n100+n50+n0))*100<<"%";
}

