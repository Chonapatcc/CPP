#include <iostream>
using namespace std;

class Animal
{
private:
    int age;
    int num ;

public :
    Animal(int age=0 , int num=0):age(age),num(num)
    {
    }

    friend ostream& operator<<(ostream& out, Animal &o)
    {
        return out;
    }


};


int main()
{
    Animal d;

    cout << Animal d(0,0); 
}