#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a%6==0)
    {
        cout << "FizzBuzz";
    }
    else if(a%3==0)
    {
        cout << "Fizz";
    }
    else if(a%2==0)
    {
        cout << "Buzz";
    }

}