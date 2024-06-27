#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    cin>>input;

    string base_2 ="";
    while(input>0)
    {
        base_2+=(input%2)+'0'; 
        input = input>>1;
    }
    for(int i =0 ;i<6- base_2.length();i++)
    {
        cout << '0';
    }
    for(int i =base_2.length()-1 ; i>=0 ;i--)
    {
        cout << base_2[i] ;
    }
}