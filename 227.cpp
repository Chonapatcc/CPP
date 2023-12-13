#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i =0 ; 
    int c=0;
    for(i=0; i < 10 ; i++)
    {
        c+=1;
        if(c==6)
        {
            break;
        }
    }
    cout << i;
}