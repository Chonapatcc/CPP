#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,t1,t2,temp="";
    int n,c=0;
    cin >>a>>n;
    
    for(int i=1 ; i< a.length()-1 ; i++)
    {
        if(a[i]==',')
        {
            if(c==0)
            {
                t1=temp;
            }
            else
            {
                t2=temp;
            }
            c++;
            temp="";

        }
        else
        {
            temp+=a[i];
        }
    }
    t2=temp;
    //cout << t1 <<" " <<t2 <<endl;
    int row=stoi(t1),col=stoi(t2);
    for(int i =0 ; i< n ;i++)
    {
        for(int y= 0 ;y < n; y++)
        {
            if(col==i and row==y)
            {
                cout << '*';
            }
            else
            {
                cout << '#';
            }
        }
        cout <<endl;
    }
}