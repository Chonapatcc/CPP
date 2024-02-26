#include <iostream>
using namespace std;

class BankAccount
{
private:
    int  number;
    double balance;
public:
    void Withdraw(int n)
    {
        number-=n;
    }
    BankAccount(int n , int b):number(n),balance(b){}
    friend ostream &operator<<(ostream &output, BankAccount &act)
    {
        output << "Account No. "<< act.number
               <<" has balance "<<act.balance;
        return output;
    }
    void func(int n)
    {
        number+=n;
    }
    void func(int n, int b)
    {
        number+=n;
        balance+=b;
    }
};

int main() 
{
    BankAccount *bkk_account = new BankAccount(4, 800);
    BankAccount *my_account = bkk_account;
    (*bkk_account).func(10,100);
    cout << *bkk_account;
}