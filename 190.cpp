#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,temp="";
    getline(cin ,a);
    getline(cin,b);

    int arr1[100] ,arr2[100],c1=0,c2=0;
    bool ch=true;
    a+=' ';
    b+=' '; 
    for(int i =0 ; i <a.length();i++ )
    {
        if(a[i]==' ')
        {
            ch=false;
        }
        if(ch)
        {
            temp+=a[i];
        }
        else
        {
            arr1[c1]=stoi(temp);
            temp="";
            c1++;
            ch=true;
        }
    }
    for(int i =0 ; i <b.length();i++ )
    {
        if(b[i]==' ')
        {
            ch=false;
        }
        if(ch)
        {
            temp+=b[i];
        }
        else
        {
            arr2[c2]=stoi(temp);
            temp="";
            c2++;
            ch=true;
        }
    }

    int arr3[c1],temp2;
    bool ch2=true;
    if(c1==c2)
    {
        for(int i =0 ; i < c1; i++)
        {
            temp2=arr1[i]+arr2[i];
            if(temp2>32548)
            {
                ch2=false;
                break;
            }
            arr3[i]=temp2;
        }
    }
    else
    {
        ch2=false;
    }
    if(ch and ch2)
    {
        for(int i =0 ; i < c1; i++)
        {
            cout << arr3[i] <<' ' ;
        }
    }
    else
    {
        cout << "Invalid" ;
    }
}