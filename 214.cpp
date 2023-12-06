#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    char a , ls[]={'a','s','w','d'} ,ls2[]={'<','v','^','>'};
    for(int i= 0 ; i < 4 ; i++)
    {
        cin >>a;
        for(int y= 0 ; y<4; y++)
        {
            if(a==ls[y])
            {
                cout << ls2[y] <<endl;
                break;
            }
        }

    }
}