#include <bits/stdc++.h>
using namespace std;
int pas(int n , int k);
int printpas(int a)
{
    for(int line =0 ; line < a; line++)
    {
        for(int i =0 ; i<=line ; i++)
        {
            cout  << pas(line, i)<<" ";
        
        }
        cout << "\n";
    }
    return 0;
}

int pas(int n , int k)
{
    int res = 1;
    
    for (int i = 0; i < k; ++i) 
    {
        res *= (n - i);
        res /= (i + 1);
        //cout <<"'"<< res<<"'" <<endl;
    }
 
    return res;
}



int main()
{
    int a;
    cin>>a;
    
    printpas(a);
    
}