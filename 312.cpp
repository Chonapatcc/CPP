#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int arr1[13]= {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string arr2[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    
    string x="";
    int c=0;
    for(int i =0 ; i< 13 ; i++)
    {

        int dif = a/arr1[i];
        //cout << dif <<endl;
        for(int y=0 ; y<dif ;y++)
        {
            x+=arr2[i];

        }
        a-=dif*arr1[i];
        
        
        
    }
    cout << x;
}