#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string name,type;
    getline(cin,name);


    int age;
    cin>> age;
    cin>> type;

    string married = "No";

    if(age>=15)
    {
        cin>>married;
    }

    if(type=="m" || type=="M")
    {
        if(age<16)
        {
            cout << "Master " << name << endl;
        }
        else
        {
            cout << "Mr " << name << endl;
        }
    }
    else
    {
        if(married=="Yes")
        {
            cout << "Mrs " << name << endl;
        }
        else
        {
            cout << "Miss " << name << endl;
        }
    }
}