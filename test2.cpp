#include <bits/stdc++.h>
using namespace std;

class Animal
{
private:
    int n1;
    int n2;

public:
    explicit Animal(int n1=0,int n2=0):n1(n1),n2(n2)
    {}

    int getN1() const
    {
        return n1;
    }

    int getN2() const
    {
        return n2;
    }

};


int main()
{
    Animal cat(1,2);
    cout << cat.getN1() << " " <<cat.getN2();
}