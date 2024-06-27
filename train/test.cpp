#include <iostream>
using namespace std;

class Animal
{
private:
    int age;
    int num ;

public :
    Animal(int age=0 , int num=0)
    {
        age = age;
        num = num;
    }

    int getAge()
    {
        return age;
    }

};


int main()
{
    Animal d=Animal(0,0);

    cout <<d.getAge();
}