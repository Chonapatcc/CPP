#include <bits/stdc++.h>
using namespace std;


int recurTetra(int n,int *lst)
{
    if(n==0)
    {
        return lst[n];
    }
    else
    {
        return lst[n]+recurTetra(n-1,lst);
    }
}

int main()
{
    int number;
    list<int> lstNumber;
    while(cin >> number)
    {    
        lstNumber.push_back(number);
    }
    
    int maxNumber = *max_element(lstNumber.begin(),lstNumber.end());

    // cout << maxNumber<<endl;
    int lst[maxNumber]={1};
    for(int i= 1 ; i <maxNumber;i++)
    {
        lst[i] = i+1 + lst[i-1];
    }

    // for(int i= 0 ; i <maxNumber;i++)
    // {
    //     cout << lst[i] << " ";
    // }
    for(list<int>::iterator i = lstNumber.begin(); i != lstNumber.end(); ++i)
    {
        cout << recurTetra(*i -1,lst) << endl;
    }

        
}