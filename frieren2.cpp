#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    double salary;
    cin>>name>>salary;
    double itemprice ; 
    double sum=0;
    for(int i =0 ; i <12 ; i++)
    {
        cin>> itemprice;
        sum+=itemprice;
    }
    
    sum=sum*15/100;
    salary *=12;

    salary+=sum;
    cout << name << " " <<fixed << setprecision(2)<< salary;

}