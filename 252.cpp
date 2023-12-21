#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int a2=sqrt(a);

    int way=0, n=1;
    int arr[a2][a2];

    for(int i =0 ; i <a2 ;i++)
    {
        for(int y =0 ; y< a2 ; y++)
        {
            arr[i][y]=0;
            n++;
        }
    }
    n=1;
    int x=0,y=0,ind=1;
    while (n<=a)
    {

        way%=4;

        if()
        way++;
        
    }

    for(int i =0 ; i< a2 ;i++)
    {
        for(int y=0 ;y<a2;y++)
        {
            cout << arr[i][y] <<" " ;
        }
        
        cout <<endl;
    }
    
    

}