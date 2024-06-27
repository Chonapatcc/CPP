#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=0;
    string inp;
    char temp;
    for(int i =0;i<4;i++)
    {
        getline(cin,inp);
        temp=tolower(inp[0]);
        if(temp=='c')
        {
            a++;
        }
        else
        {
            b++;
        }
        

    }
    if(a>=b)
    {
        cout << "Chicken rice";
    }
    else
    {
        cout << "Noodle";
    }
}