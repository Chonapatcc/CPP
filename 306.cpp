#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if((a>20 or a<0) or b>a)
    {
        cout << "KidAengDi";
    }
    else
    {
        int dif=a-(a-b);
        int sum=1;
        for(int i=0 ;i<dif;i++)
        {
            sum*=a;
            a--;
        }
        cout << sum;
    }

}
