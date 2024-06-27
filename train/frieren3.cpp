#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int prisoners[size];

    int m =0 ; 
    for(int i= 0 ; i < size; i++)
    {
        cin >> prisoners[i];
        if (prisoners[i] > m)
        {
            m = prisoners[i];
        }
    }

    int even_list[1000] ; 
    int even_n=0;

    int odd_list[1000];
    int odd_n= 0 ;
    for(int num = 1 ; num<m ; num++)
    {
        int check= 0 ;
        for(int i =0 ; i< size; i ++)
        {
            if(prisoners[i] == num)
            {
                check = 1 ; 
                break;
            }
        }
        if(check==0)
        {
            if(num%2==0)
            {
                even_list[even_n] = num;
                even_n++;
            }
            else
            {
                odd_list[odd_n]= num;
                odd_n ++;
            }
        }
    }
    
    //print

    //odd
    for(int i= 0 ; i < odd_n;i++)
    {
        cout << odd_list[i] << " ";
    }
    cout <<endl;

    for(int i =0 ; i<even_n ; i++)
    {
        cout << even_list[i] << " ";
    }
    cout << endl;


}