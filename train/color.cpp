#include <bits/stdc++.h>
using namespace std;
bool check(string x)
{
    string color[]={"Red" , "Yellow" , "Blue" , "White"};

    bool ch=false;
    for(int i =0;i<4;i++)
    {
        if(color[i]==x)
        {
            ch=true;
            break;
        }
    }

    return ch;
}
bool countblue(string x)
{
    if(x=="Blue")
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string a,b,c;
    cin >> a >> b >> c;
    
    if(check(a) and check(b) and check(c))
    {
        int bluec=0;
        if(countblue(a))
        {
            bluec++;
        }
        if(countblue(b))
        {
            bluec++;
        }
        if(countblue(c))
        {
            bluec++;
        }
        if (a!="Red" and b!="Red" and c!="Red")
        {
            cout << "Second Line";
        }
        else if(c=="White")
        {
            cout << "Third Line";
        }
        else if(bluec>1)
        {
            cout << "First Line";
        }
        else
        {
            cout << "Third Line";
        }
    }
    else
    {
        cout << "ERROR";
    }

    
    

}