#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    cin >> t;
    int sum;
    string n;
    bool ch;
    for(int i =0 ;i<t.length();i++)
    {
        if(ch)
        {
            sum+=stoi(n);
            //cout<< n<<endl;
            ch=false;
            n="";
        }
        if(isdigit(t[i]))
        {
           n.push_back(t[i]);
        }
        else
        {
            if(n.length()>0)
            {
               ch=true; 
            }
            
        }
        


    }
    if(n.length()>0)
    {
       sum+=stoi(n); 
    }
    
    printf("%04d",sum);
}