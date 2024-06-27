#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=0;
    int b=0;
    string word;
    cin>>word;
    int checker =0 ;
    for(int i=0 ; i<word.length() ; i++)
    {
        if(word[i] == '+')
        {
            checker =1;
        }
        else
        {
            if(checker)
            {
                b= b*10+ word[i]-'0';
            }
            else
            {
                a= a*10+ word[i]-'0';
            }
        }
    }
    cout << a+b; 
}