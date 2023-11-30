#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for(int i= 0; i <a;i++)
    {
        for(int x=0;x<i;x++)
        {
            cout <<"- ";
        }
        cout <<a%10 << " ";
        for(int y=i+1;y<a;y++)
        {
            cout << "+ ";
        }
        cout <<endl;
    }
}