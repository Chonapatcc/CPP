#include <bits/stdc++.h>
using namespace std;

vector<string> getstr(string s)
{
    string st;
    bool ch=false;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='[')
        {
            ch=true;
            continue;
        }
        else if(s[i]==']')
        {
            ch=false;
        }

        if(ch)
        {
            st.push_back(s[i]);
        }
    }
    stringstream tp;
    string temp;
    tp << st;
    vector <string>ls;
    while(getline(tp,temp,','))
    {   
        ls.push_back(temp);
        
    }
    return ls;
}
int main()
{
    string a,b,c;
    cin >> a >> b >> c;

    vector <string>x,y,z;
    x=getstr(a);
    y=getstr(b);
    z=getstr(c);
    bool inb,inc;
    bool printed=false;
    int count=0;
    for(int i =0;i<x.size();i++)
    {
        inb,inc=false,false;
        for(int ib=0;ib<y.size();ib++)
        {
            if(x.at(i)==y.at(ib))
            {
                inb=true;
                break;
            }
        }
        for(int ic=0;ic<z.size();ic++)
        {
            if(x.at(i)==z.at(ic))
            {
                inc=true;
                break;
            }
        }
        if(inb and !inc)
        {
            if(count>0)
            {
                cout << ",";
            }
            cout << x.at(i);
            count++;
            printed=true;
        }
    }
    if(!printed)
    {
        cout << "none";
    }
}