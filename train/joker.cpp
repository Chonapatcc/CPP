#include <bits/stdc++.h>
using namespace std;

void printchar(int n,char c)
{
    for(int i =0 ; i<n;i++ )
    {
        cout << c;
    }
}
int main()
{
    int a;
    cin >> a;
    if(a==1)
    {
        cout << " /-\\" << endl;
    }
    else
    {
        for(int i = 1 ; i <= a; i++)
        {
            printchar(a-i,' ');
            printchar(i,'/');
            cout << '-';
            printchar(i,'\\');
            cout << endl;
        }  
    }
    
    for(int i =0 ; i < 2;i++)
    {
        printchar(a-2,' ');
        cout << "//V\\\\" <<endl;
    }
}