#include <bits/stdc++.h>
using namespace std;


int main()
{
    string a;
    cin>>a;
    int number =0 ; 
    int count=0;
    int digit =0;
    for(int i =0 ; i< a.length() ; i++)
    {
        if(a[i]=='0' and number==0 and count ==0)
        {
            cout << "Incorrect";
            exit(0);
        }
        if(a[i] == ',')
        {
            if(number>0)
            {
                if(count==0 and digit>0 and digit<=3)
                {
                    count++;
                }
                else if(count >0 and digit==3)
                {
                    count++;
                }
                else
                {
                    cout << "Incorrect";
                    exit(0);
                }
                number =0 ;
                digit =0;
            }
            else
            {
                cout << "Incorrect";
                exit(0);
            }
        
        }
        else
        {
            number = number*10 + (a[i]-'0');
            digit++;
        }
    }
    if(number>0 and digit==3)
    {
        cout <<"Correct";
    }
    else
    {
        cout << "Incorrect";
    }

}