#include <bits/stdc++.h>
using namespace std;
class Animal
{
private:
    string name;

public:
    Animal(string name) : name(name)
    {}

    string getName()
    {
        return name;
    }

};


class Cat : public Animal
{
private:
    int price;

public:
    Cat(string name) : Animal(name)
    {}
    string getName()
    {

        return Animal::getName();
    }

};


int main()
{
    Cat orange("orange");


    cout << orange.Animal::getName();


}