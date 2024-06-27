#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int up,low,num,punc;
    if(s.length()>20)
    {
        cout << "Invalid";
        return 0;
    }
    for(int i =0 ;i<s.length();i++)
    {
        if(isalpha(s[i]))
        {
            if(isupper(s[i]))
            {
                up++;
            }
            else
            {
                low++;
            }
        }
        else if(isdigit(s[i]))
        {
            num++;
        }
        else if(ispunct(s[i]))
        {
            punc++;
        }
    }
    string tp=(up and low and num and punc)? "Valid":"Invalid";
    cout << tp;
}
