#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int sum =100 ; 
    while(sum>=10)
    {
        int  x =0;
        for(int i=0 ; i < a.length() ; i++)
        {
            x+=a[i]-'0';
        }
        sum=x;
        //cout << a << endl;
        a=to_string(sum);
    }

    cout << sum ;

}