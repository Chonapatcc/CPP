#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    a+=' ';
    int arr[4]={0,0,0,0};
    string temp="";
    for(int i=0 ; i< a.length() ; i++)
    {
        if(a[i]==' ')
        {
            if(temp=="Male")
            {
                arr[1]++;
            }
            else if(temp=="Female")
            {
                arr[2]++;
            }
            else
            {
                arr[3]++;
            }
            arr[0]++;
            temp="";
        }
        else
        {   
            temp+=a[i];
        }
    }
    string tp[4]={"All","Male","Female","LGBTQ+"};
    for(int i=0 ; i <4 ; i++)
    {
        cout << tp[i]<<": ";
        
        if(arr[i]==0)
        {
            cout << "none";
        }
        else
        {
            cout << arr[i];

        }
        cout<< "\n";

    }
}