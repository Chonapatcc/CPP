#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int arr[100],c=0; 
    string temp="";
    a[a.length()-1]=',';
    for(int i =1 ; i < a.length() ;i++)
    {
        if(a[i]==',')
        {
            arr[c]=stoi(temp);
            temp="";
            c++;
        }
        else
        {
            temp+=a[i];
        }
    }
    int sum=0;
    for(int i =0 ; i<c ; i++)
    {   sum+=arr[i];
        if(i==0)
        {
            cout <<'['<< sum;
        }
        else
        {
            cout << ", " << sum;
        }
    }
    cout << ']';

}