#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a="",temp;
    getline(cin ,temp);
    bool inch=false;
    for(int i =0 ; i< temp.length(); i ++)
    {
        if(temp[i]=='p')
        {
            inch=true;
        }
        if(inch)
        {
            a+=temp[i];
        }
    } 

    string ch="",chstr2="";
    //check print

    for(int i=0 ; i<=5 ; i++)
    {
        ch+=a[i];
    }
    //cout << a <<endl; 
    bool ch0=true;
    bool ch1=a[6]=='(', ch2=a[a.length()-2]==')' 
    , ch3=a[a.length()-1]==';';
    bool strch=false;
    int c1=0,c2=0;
    for(int i = 7 ;i< a.length()-2 ; i++)
    {
        if(a[i]=='\\')
        {
            continue;
        }
        if(a[i]=='\'' or a[i]=='\"')
        {
            if(strch)
            {
                strch=false;
            }
            else
            {
                strch=true;
            }
        }
        else
        {
            if(strch)
            {
                chstr2+=a[i];
            } 
            else
            {
                ch0=false;
                break;
            }
        }
        

        if(a[i]=='\'')
        {
            c1++;
        }
        if(a[i]=='\"')
        {
            c2++;
        }
    
    }
    if((c1==2 and c2==0) or (c1==0 and c2==2));
    else
    {
        ch0=false;
    }
    if(ch=="printf" and ch1  and ch2 and ch3);
    else
    {
        ch0=false;
    }


    if(!ch0)
    {
        cout << "Compile Error!";
    }
    else
    {
        cout << chstr2;
    }
}
