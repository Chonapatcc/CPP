#include <bits/stdc++.h>
using namespace std;


void func(int &refer)
{
    refer++;
}

void func(int *refer)
{
    (*refer)++;
}


int main()
{
    int a=5;

    cout <<a <<endl;
    func(a);
    cout << a <<endl;
    func(&a);
    cout << a <<endl;
}