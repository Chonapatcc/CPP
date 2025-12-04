#include <iostream>

using namespace std;

int main()
{
    int a,b,temp;
    cin>> a >>b;
    cout << a <<" " << b <<endl;

    if(a>b)
    {
        temp = a;
        a = b ;
        b = temp ;
    }
    while(a!=0)
    {
        temp = b%a;
        b = a;
        a = temp;

    }

    cout << abs(b) << endl;
    return 0;


}