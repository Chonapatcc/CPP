#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    cin >>a >>b;
    b=b/100;
    double bmi=a/(b*b);
    cout << "BMI: "<<round(bmi/0.01)*0.01 <<endl;
    
}