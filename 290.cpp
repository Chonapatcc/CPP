#include <bits/stdc++.h>
using namespace std;

void printfunc(int n)
{
    for(int i=0 ; i< n ;i++)
    {
        cout << "*";
    }
}
void printspace(int n)
{

    for(int i=0 ; i<n; i++)
    {
        cout <<" ";
    }
}
void printmid(int n)
{
    cout<<" ";
    for(int i= 0; i<n;i++)
    {
        cout<<"=";
    }
    cout<<" ";
}
int main()
{
    int a;
    cin>>a;
    

    for(int i =1 ;i<=a ;i++)
    {
        printspace(a+1);
        printspace(a-i);

        printfunc(i);
        printfunc(i-1);
        cout << endl;
    }
    for(int i=1 ;i<=a;i++)
    {
        printspace(a-i);
        printfunc(i);
        printmid(a*2-1);
        printfunc(i);
        cout<<endl;
    }

    for(int i =0 ;i<a; i++)
    {
        printspace(a);
        printmid(a*2-1);
        cout<<endl;
    }
    cout << "level " << a;
}