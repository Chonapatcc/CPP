#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max_height =0 ;
    int count =0 ;
    int input ; 
    while(cin >>input)
    {
        if(input >max_height)
        {
            count++;
            max_height = input;
        }
    }

    cout << count <<endl;
}