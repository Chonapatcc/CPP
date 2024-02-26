#include <iostream>
using namespace std;

class BankAccount
{
private:
    int number;
    double balance;
public:
    BankAccount(int n, double b):number(n),balance(b){}
    friend ostream &operator<<(ostream &output, BankAccount &act)
    {
        output << "Account No. "<< act.number
               <<" has balance "<<act.balance;
        return output;
    }
};

int main()
{
    BankAccount scb_account(1,1000);

    cout << scb_account <<endl;
}