#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    cin>>a>>b;
    double bmi= a/(b*b);

    printf("BMI is %.1f\n",bmi);
    double arr1[3]={18.5,25,30};
    string arr2[3]={"Underweight","Normal weight","Overweight"};
    string tp="Obesity";

    for(int i=0 ; i< 3 ; i++)
    {
        if(bmi<arr1[i])
        {
            tp=arr2[i];
            break;
        }
    }
    cout << tp;
    

}