#include <bits/stdc++.h>
using namespace std;

void printMul(int x)
{

    for(int i =1; i<=12; i++)
    {
        printf("%d * %d = %d\n",x,i,i*x);
    }

}

int main()
{
    int multi;
    int to;
    cin>>multi >>to;

    for(int i =multi ; i<=to ; i++)
    {
        printf("Multiplication of %d\n",i);
        printMul(i);

        cout <<"---------------------" <<endl;

    }
}