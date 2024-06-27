#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t,a="",ls[3];
    int ind=0;

    getline(cin,t);
    t+=':';
    for(int i =3 ;i <t.length() ; i++ )
    {
        if(t[i]==':' or t[i-1]==':')
        {
            continue;
        }
        if(t[i+1]==':')
        {
            ls[ind]=a;
            a="";
            ind++;
        }
        else
        {
            a+=t[i];
        }
    }

    string lsv[100],temp="";
    int c=0 ,m=0 , p=0;
    bool ch=true;
    
    for(int i =0 ; i<3 ; i ++)
    {
        c=0;
        temp="";
        lsv[100]={};
        for(int y =0 ;y <sizeof(ls[i])/sizeof(ls[i][0]);y++)
        {
            if(ls[i][y]==' ')
            {
                
                ch=true;
                for(int z=0;z<c;z++)
                {
                    if(temp==lsv[z])
                    {
                        ch=false;
                        break;
                    }
                }
                if(ch)
                {
                    //cout << temp <<endl;
                    lsv[c]=temp;
                    temp="";
                    c++;  
                }
                

            }
            else
            {
                temp+=ls[i][y];
            }
        }
        //cout << c <<endl;
        if(c>m)
        {
            m=c;
            p=i;
        }
    }
    string pp="ABC";
    if(t[t.length()-3]=='e')
    {
        cout << 'C';
    }
    else
    {

        cout << 'A';
    }


}