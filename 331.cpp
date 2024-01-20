#include <bits/stdc++.h>
using namespace std;
string plusstr(string a,string b)
{
    int len1=a.length();
    int len2=b.length();
    int len;
    if(len1>len2)
    {
        for(int i=0 ; i< len1-len2; i++)
        {
            b='0'+b;
        }
        len=len1;
    }
    else
    {
        for(int i =0 ;i<len2-len1;i++)
        {
            a='0'+a;
        }
        len=len2;
    }
    string x(len+1,'0');
    int id=0;
    int carry=0;
    for(int i=len-1;i>=0 ;i--)
    {
        int n1= a[i]-'0';
        int n2= b[i]-'0';
        int ans =n1+n2+carry;
        carry =ans/10;
        x[id++] = ans%10+'0';

    }
    x[id]=carry+'0';
    while(x[id]=='0')
    {
        id--;
    }
    string xx="";
    for(int i= id; i>=0; i--)
    {
        xx+=x[i];
    }
    return xx;

    



}
int main()
{
    string arr[200] = {"1","1"};

    int a;
    cin>>a;
    if(a==1)
    {
        cout << arr[0];
    }
    else
    {
        cout<<arr[0] <<" "<<arr[1]<<' ' ;
    }
    for(int i=2 ; i< a; i++)
    {
        string x=plusstr(arr[i-1],arr[i-2]);
        arr[i]=x;
        cout << arr[i] << " ";
    }
    


}