#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    double balance ;

public:
    BankAccount():balance(0)
    {}
    
    //accesssor
    double getBalance()
    {
        return balance;
    }

    //mutator
    void Deposit(double money)
    {
        balance += money;
    }
    void Withdraw(double money)
    {
        balance -=money;
    }

};


int main()
{
    BankAccount p1;
    string type;
    double money;
    while(cin>>type and type!="exit")
    {
        cin >>money;

        if(type =="deposit")
        {
            p1.Deposit(money);
        }
        else if(type =="withdraw")
        {
            if(p1.getBalance()<money)
            {
                cout <<fixed <<setprecision(2)<<"balance = " <<p1.getBalance() <<endl;
                exit(0);
            }
            p1.Withdraw(money);
        }
        
    }
    cout <<fixed <<setprecision(2)<<"balance = " <<p1.getBalance() <<endl;

}