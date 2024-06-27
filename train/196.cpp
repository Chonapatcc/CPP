#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x,temp="" ,arr[3];
    int n=0;
    getline(cin,x);
    x+=',';
    for(int i= 0 ; i< x.length(); i ++)
    {
        if(x[i]==',')
        {
            arr[n]=temp;
            n++;
            temp="";

        }
        else
        {
            temp+=x[i];
        }
    }

    int sc,h=0,p=-1,l ;
    string st;
    bool ch[5];
    for(int i =0 ; i< 3; i++)
    {
        sc=0;
        st=arr[i];
        l=st.length();
        for(int i =0 ; i <5; i++)
        {
            ch[i]=false;
        }

        for(int y =0 ; y<l;y++)
        {
            if(ch[0] and ch[1] and ch[2] and ch[3])
            {
                break;
            }
            if(isalpha(st[y]))
            {
                if(toupper(st[y])==st[y])
                {
                    ch[0]=true;
                }
                else
                {
                    ch[1]=true;
                }
            }
            else if(isdigit(st[y]))
            {
                ch[2]=true;
            }
            else if(ispunct(st[y]))
            {
                ch[3]=true;
            }
        }
        if(l>=6 and l<=12)
        {
            ch[4]=true;
        }
        for(int i =0 ; i< 5;  i++)
        {
            if(ch[i])
            {
                sc++;
            }
        }
        //cout << sc << endl;
        if(sc>h)
        {
            h=sc;
            p=i;
        }
    }
    string name[3]={"Man", "Non","Miv"};
    cout << arr[p] <<" ("<<name[p] << ")";


}