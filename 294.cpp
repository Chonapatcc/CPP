#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>20000 or b>20000)
    {
        cout << "Error";
        exit(0);
    }
    int mon=a+b;
    int arr[3]=  {1000,500,100};

    for(int i=0 ; i< 3 ; i++)
    {
        int dif=mon/arr[i];

        cout << dif << endl;

        mon-=dif*arr[i];
    }
}