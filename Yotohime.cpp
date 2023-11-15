#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    getline(cin,n);
    int nn=stoi(n);
    int cal;
    string name,age,gender;
    cout << "--Customers Information--" << endl;
    for(int i=0;i<nn;i++)
    {
        getline(cin,name);
        getline(cin,age);
        getline(cin,gender);

        cal=2017-stoi(age);

        cout << name+" (age : "<<cal<<")" << endl;        
    }
}