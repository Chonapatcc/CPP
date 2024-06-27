#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    bool al=false,ch=false;
    string temp="";
    for(int i =0 ; i<s.length() ; i++)
    {
        if(ch)
        {
            temp+=s[i];
        }
        else
        {
            if(isdigit(s[i]) or s[i]=='-' or s[i]=='.')
            {
                ch=true;
                temp+=s[i];
            }
            if(isalpha(s[i]))
            {
                al=true;
                break;
            }
            
        }
    }
    int cdot=0,cspace=0;
    if(temp.length()==0)
    {
        al=true;
    }
    for(int i=0 ; i<temp.length() ;i ++)
    {
        if(cdot>1)
        {
            al=true;
            break;
        }
        if(cspace>0 and isdigit(temp[i]))
        {
            al=true;
            break;
        }

        if(isdigit(temp[i]) or temp[i]=='-' or temp[i]=='.' or temp[i]==' ')
        {
            if(temp[i]==' ')
            {
                cspace++;
            }
            if(i>0 and temp[i]=='-')
            {
                al=true;
                break;
            }
            if((i==temp.length()-1 or i==0) and temp[i]=='.')
            {
                al=true;
                break;
            }
            if(temp[i]=='.')
            {
                cdot++;
            }
            
        }
        else
        {
            al=true;
            break;
        }
    }
    cout << al;
    return al;
}