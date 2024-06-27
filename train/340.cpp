#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,letter;
    getline(cin,a);
    getline(cin,letter);
    //cout << a << " " << letter << endl;
    int m=0;
    string x;
    string temp="";
    int c=0;
    a+=' ';
    for(int i=0 ; i<a.length() ; i++)
    {
        if(a[i]==' ')
        {
            //cout << x <<endl;
            if(c>m)
            {
                m=c;
                x=temp;  
            }
            temp="";
            c=0;
        }
        else
        {
            int ch =0;
            for(int y=0 ; y<letter.length() ; y++)
            {
                if(a[i]==letter[y])
                {
                    ch=1;
                    break;
                }
            }
            if(ch)
            {
                temp+=a[i];
                c++;
            }
            else
            {
                temp="";
                c=0;
            }
            
        }
    }
    cout << x;
}