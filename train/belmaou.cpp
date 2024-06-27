#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr[]={"Fire","Water" , "Wind" , "Ground" , "Light" , "Dark"};
    string inp;
    cin >> inp;
    int a=-1,n=0,ind=0;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(inp==arr[i])
        {
            a=i;
        }
    }
    if(a==-1)
    {
        cout << "No have this mahou in your library.";
    }
    else
    {
        cout << bitset<20>(a).to_string();
    }
}