#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
class Person
{
public:
    string name;
    string houseNO;

    Person(string name,string houseNO)
    {
        this->name = name;
        this->houseNO = houseNO;
    }
};

void linearSearch(vector<Person> &v,string find)
{
    for(auto i:v)
    {
        if(i.name ==find)
        {
            cout << i.houseNO <<endl;
            return;
        }
    }
    cout << "Contact not found." <<endl;
    return ;
}
int main()
{
    string line;
    vector<Person> v;
    while(getline(cin,line) and line !="-------------------------")
    {
        string name;
        string houseNO;
        stringstream s(line);
        s>>name>>houseNO;
        Person *p = new Person(name,houseNO);
        v.push_back(*p);
        // cout<<name<<" "<<houseNO<<endl;
    }
    while(getline(cin,line))
    {
        linearSearch(v,line);
    }
}