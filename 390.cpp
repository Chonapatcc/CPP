#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    string input;
    cin>>input;
    string num_a="";
    string num_b="";
    string sign="";
    int ch=1;
    for(int i =0 ; i < input.length() ; i++)
    {
        if(ch)
        {
            if(input[i]>='0' and input[i]<='9')
            {
                num_a+=input[i];
            }
            else
            {
                ch=0;
                sign=input[i];
            }
        }
        else
        {
            num_b+=input[i];
        }
    }
    double result;
    if(sign=="+")
    {
        result = stoi(num_a)+stoi(num_b);
    }
    else if(sign=="-")
    {
        result = stoi(num_a)-stoi(num_b);
    }
    else if(sign=="*")
    {
        result = stoi(num_a)*stoi(num_b);
    }
    else
    {
        result = stof(num_a)/stoi(num_b);
        cout << fixed <<setprecision(2) <<result;
        exit(0);

    }
    cout <<result;
}