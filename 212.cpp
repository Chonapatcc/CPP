#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,ls[]={"monday","tuesday"
    ,"wednesday","thursday","friday","saturday","sunday"};

    int n,ind;
    cin >> a>>n;
    for(int i =0 ; i <7;i++)
    {
        if(ls[i]==a)
        {
            ind=i;
            break;
        }
    }
    ind+=n;
    ind%=7;
    cout <<ls[ind];
    
}