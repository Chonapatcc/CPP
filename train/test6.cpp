#include<bits/stdc++.h>
using namespace std;


class A
{
public:
    A(int a, int b , int c):a(a),b(b),c(c)
    {}
    int a;
    int getC()
    {
        return c;
    }
protected:
    int b;
private:
    int c;

};

class B: public A
{
public:
    B(int a, int b ,int c):A(a,b,c)
    {}
    void func()
    {
        cout <<a <<endl;
        cout <<b <<endl;
        cout <<getC() <<endl;
    }

private:
};


int main()
{
    B cat(1,2,3);
    int **a = new int*[20];
    // for(int i =0 ; i< 20 ; i++)
    // {
    //     *a[i] = i ; 
    // }
    for(int i =0 ; i< 19 ; i++)
    {
        *(a[i]) = i ;
        cout << *(a[i]) << endl;
    }
}