#include <bits/stdc++.h>
using namespace std;

int main()
{
    double num;

    cin >> num;
    int cal =ceil((num-60+1)/5);
    string list[8]={"F" , "D" , "D+" , "C" , "C+" , "B" , "B+" , "A"};

    if (num>100)
    {
        cout << "Error : Value must be less than or equal to 100.";
    }
    else if(num<0)
    {
        cout << "Error : Value must be greater than or equal to 0.";
    }
    else if(cal<=0)
    {
        cout << list[0];
    }
    else if(cal>=7)
    {
        cout << list[7];
    }
    else
    {
        cout << list[cal];
    }
}