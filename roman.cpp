#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t,list="IVXC";
    int c[]={0,0,0,0};

    cin >> t;

    for(int i =0 ; i < t.length();i++)
    {
        for(int y=0; y<4;y++)
        {
            if(t[i]==list[y])
            {
                c[y]++;
            }
        }
    }
    bool ch =true;
    for(int i =0 ; i< 4;i++)
    {
        if (c[i]>3)
        {
            ch=false;
            break;
        }
    }
    if(ch)
    {
        cout << "Correct";
    }
    else
    {
        cout << "Not Correct";
    }
}
