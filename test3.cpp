#include <bits/stdc++.h>
using namespace std;


class BankAccount
{
private:
    int number;
    int balance;

public:
    BankAccount(int number=0 , int balance = 0):number(number),balance(balance)
    {
    }

    friend ostream &operator<<(ostream &output ,BankAccount &act)
    {
        output << "Account No. " << act.number
               << " has balance "<< act.balance;
        return output;
    }
};

int main()
{
    BankAccount first_ac(10,20);

    cout << first_ac;

    int n=1;
}