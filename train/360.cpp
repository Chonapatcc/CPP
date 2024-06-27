#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    cin>>input;
    char alphabet;
    if(input <=0 or input>26)
    {
        cout <<'-';
        exit(0);
    }
    for(int i =0 ; i<input ; i++)
    {   

        if(i == input-1 or i==25)
        {
            alphabet = 97+i;
            cout <<alphabet ;
        }
        else
        {
            alphabet = 97+i;
            cout <<alphabet <<'-';
        }
        
    }
    

}