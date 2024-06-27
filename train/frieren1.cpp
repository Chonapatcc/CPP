#include <iostream>
using namespace std;

int main() 
{
    int a;
    cin>>a ;
    int c=0;
    while (a>0)
    {
        if(a%2==0)
        {
            a/=2;
        }
        else
        {
            a-=1;
        }
        c++;
    }
    cout << c;
}