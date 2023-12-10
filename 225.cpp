#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,temp="";
    cin >>a;

    for(int i =a.length()-1 ; i>=0; i--)
    {
        temp+=a[i];

    }
    if(a==temp)
    {
        cout <<a <<" is a palindrome.";
    }
    else
    {
        cout <<a<< " is not a palindrome.";
    }
}