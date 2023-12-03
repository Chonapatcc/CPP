#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin>>a;
    if(a<=4)
    {
        cout << "The number of squares must be greater than 4.";
    }
    else
    {
        printf("number of squares %.f\n",a);
        printf("Diagonal : %.1f", a/2*(a-3)); 
    }
    
}