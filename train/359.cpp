#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    cin>>input;
    int count =0 ;

    for(int number =1 ; number<=input ; number++)
    {
        if(input%number==0)
        {
            cout << number <<endl;
            count++;
        }
    }
    if(count <=1)
    {
        printf("There is %d numbers.",count) ;

    }
    else
    {
        printf("There are %d numbers.",count) ;

    }
}