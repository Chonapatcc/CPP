#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    int arr[100]={},ind=0,num;
    cin >> num;

    for(int i=1;i<a.length()-1;i++)
    {
        if(isdigit(a[i]))
        {
            arr[ind]=a[i]-'0';

            ind++;

        }
    }
    string lst[4];
    int cl=0;
    for(int i=0;i<ind-1;i++)
    {
        for(int y=i;y<ind;y++)
        {

            if(arr[i]+arr[y]==num)
            {
                lst[cl]=to_string(y)+" "+to_string(i);
                //cout <<lst[cl];
                //cout << y<<" " <<i <<endl;
                cl++;
            }
        }
    }
    


    int n = sizeof(lst)/sizeof(lst[0]);
    sort(lst,lst+n);
    for(int i =0 ;i<n;i++)
    {
        if(lst[i]!="")
        {
           cout <<lst[i] << endl; 
        }
        

    }
    
}