#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,g="GUITAR",ans;
    bool ch=true;
    for(int i =0;i<3;i++)
    {
        getline(cin,a);
        ch=true;
        for(int i=0;i<g.length();i++)
        {
            if(a[i]!=g[i])
            {
                ch=false;
                break;
            }
        }
        
        if(ch)
        {
            ans=a;
        }
    }
    string t="GUITAR:[",temp="";

    int c=0;
    bool st=true;
    for(int i =7;i<ans.length();i++)
    {
        if(ispunct(ans[i]) and ans[i]!=' ')
        {
            if(ans[i]==',' or ans[i]==']' or ans[i]=='[')
            {
                if(temp!="")
                {
                   if(c>0)
                    {
                        t+=", "+temp;
                    }
                    else
                    {
                        t+=temp;
                    }
                    c+=1;
                }
                temp="";
                st=true;
            }
            else
            {
                temp="";
                st=false;
            }
        }
        
        
        if(st and ans[i]!=',' and ans[i]!=' ' and ans[i]!='[')
        {

            temp+=ans[i];
        }
    }


    t+="]";
    cout << t;
}