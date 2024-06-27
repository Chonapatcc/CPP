#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin , a);
    int le;
    cin >>le;
    string emp="";
    bool ch=false;
    if(le>=a.length())
    {
        le=a.length();
        ch=true;
    }
    if (ch)
    {
        cout << a;
    }
    else
    {
        for(int i =0 ; i <le;i++)
        {
            emp+=a[i];
        }
        cout << emp << "..." ;  
    }
    
}