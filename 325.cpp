#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t[13]= {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int arr[13] ={1000,900,500,400,100,90,50,40,10,9,5,4,1};

    int a;
    cin>>a;

    for(int i=0 ; i< 13;  i++)
    {
        while(a>=arr[i])
        {
            cout << t[i];
            a-=arr[i];
        }
    }

}