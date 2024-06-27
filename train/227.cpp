#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    double temp;
    cin >>n;

    for(int i=0 ; i< n ; i++ )
    {
        cin >> temp;
        double x = sqrt(1+(temp-1));
        cout <<fixed << setprecision(2)<< -1+x <<endl;   
    }
        
}