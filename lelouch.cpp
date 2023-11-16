#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int list[n],va;
    
    for(int i =0;i<n;i++)
    {
        cin>> va;
        list[i]=va;
    }
    int value;
    cin >> value;
    
    cout << "Position: ";
    
    bool ch;
    
    for(int i=0;i<n;i++)
    {
        if(list[i]==value)
        {
          if(ch)
          {
            cout << "," << i+1;
          }
          else
          {
            cout << i+1;
            ch=true;
          }
        }
    }
}