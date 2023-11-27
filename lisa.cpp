#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,let="",temp="";
    getline(cin ,a);
    a+=' ';
    for(int i =0 ; i< a.length();i++)
    {
        if(a[i]==' ')
        {
            //cout << temp << endl;
            let+=char(stoi(temp)+96);
            temp="";
        }
        else
        {
            temp+=a[i];
        }
    }

    cout << let;
}