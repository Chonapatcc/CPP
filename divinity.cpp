#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int b;
    cin >> a>>b>>a>>a;
    getline(cin,a);
    int level=1,exp=0;
    while(b-level*100>=0)
    {
        b-=level*100;
        level++;
    }
    cout << "Lv : " << level <<endl << "Exp : "<<b<<"/"<<level*100<<endl<<"ATK : "<<level*10<<endl<<"HP : "<<level*100;
}