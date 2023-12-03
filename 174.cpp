#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,bmi;
    cin >> a >>b;
    bmi=a/(b*b);
    double arr[]={18.5,22.9,24.9,29.9,39.9,INFINITY};
    string ls[]={"Underweight","Normal weight","Overweight","Obesity class 1","Obesity class 2","Obesity class 3"};
    for(int i =0 ; i < 6; i++)
    {
        if(bmi<arr[i])
        {
            cout << ls[i];
            break;
        }
    }
}