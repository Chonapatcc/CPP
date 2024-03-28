#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int list[n];
    int m1;
    int m2;
    
    for(int i= 0 ; i< n ; i++)
    {
        cin>>list[i];
        if(list[i]>m1)
        {
            m2= m1;
            m1 = list[i];
            
        }
        else if(list[i]>m2 and list[i]<m1)
        {
            m2 = list[i];
        }

        //cout << m1 << " " <<m2 <<endl;
    }
    cout <<m2;
}