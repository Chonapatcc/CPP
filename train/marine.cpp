#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a<=2)
    {
        cout << "Box's height must be more than 2" ;
        return 0;
    }
    string sharp,mid="#";
    for(int i=0;i<a;i++)
    {
        sharp+= "#";
    }
    cout << sharp << endl;
    for(int i =0;i<a-2;i++)
    {
        mid+=" ";
    }
    mid+="#";
    for(int i =0;i<a-2;i++)
    {
        cout << mid<<endl;
    }

    cout << sharp;

}