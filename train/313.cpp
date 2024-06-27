#include <bits/stdc++.h>
using namespace std;
int printspace(int a,int i)
{
    for(int i2= 0 ;i2<a-i;i2++)
        {
            cout << " ";
        }
    return 0;
}
int printstar(int i)
{
    cout << "*";
    for(int i3 =0 ; i3<1+(i-2)*2 ; i3++)
        {
            cout << " ";
        }
    cout << "*";
    return 0;
}
int main()
{
    int a;
    cin>>a;

    int x,y;
    x=a/2;
    y=x+1;
    for(int i =1 ; i<=y;i++)
    {
        printspace(y,i);
        if(i>1)
        {
            printstar(i);
        }
        else
        {
            cout << "*";
        }
        
        cout << endl;
    }
    for(int i =y-1 ; i>=1;i--)
    {
        printspace(y,i);
        if(i>1)
        {
            printstar(i);
        }
        else
        {
            cout << "*";
        }
        cout << endl;
    }

}