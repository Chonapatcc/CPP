#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=0 ; i< a; i++)
    {
        int temp;
        cin >>temp;
        
        for(int y=0 ; y< temp ;y++)
        {
            cout << "*";
        }
        if(temp>0)
        {
            cout << " ";
        }
        printf("(%d)\n",temp);
    }
}