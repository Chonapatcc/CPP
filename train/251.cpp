#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;
    int a;
    
    for(int i =0 ; i< x.length() ; i++)
    {
        if(isdigit(x[i])==false)
        {
            printf("ERROR please input integer only");
            return 0;
        }
    }
    a=stoi(x);
    if(a<=1)
    {
        cout << "ERROR please input more than 1";
        return 0;
    }
    
    for(int i=0 ; i< a ;i ++)
    {
        cout << "|" ;
        char spc=' ';
        if(i==a-1)
        {
            spc='=';
        }
        for(int y=0;y<i ; y++)
        {

            cout << spc;
        }
        cout << "\\" <<endl;

    }
    
}
