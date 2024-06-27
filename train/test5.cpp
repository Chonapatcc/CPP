#include <bits/stdc++.h>
using namespace std;

class Animal
{
private:
    void printData()
    {
        cout << a <<endl;
        cout << b <<endl;
        cout << c <<endl;
    }

    int a;
    int b;
protected:
    int c;
public:
    Animal(int a ,int b):a(a) ,b(b)
    {
        c=3;
    }
    void func2()
    {
        printData();
    }
    
};


int main()
{
    Animal cat(1,2);

    cat.func2();
    
}