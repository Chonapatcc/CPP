#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    int sum=0;
    int count =0;
    int list[100] ;
    while(1)
    {
        cin>>input;
        if(input==0)
        {
            break;
        }
        sum+=input;
        list[count++] = input;
        

    }

    cout << sum <<endl;
    for(int i =0 ; i<count ;i++)
    {
        cout << i+1 << " , " <<list[i] <<endl;
    }
}