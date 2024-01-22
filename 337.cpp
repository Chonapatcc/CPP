#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    string dog;
    getline(cin,dog);
    a=stoi(dog);
    
    string arr[a+1]={};
    for(int i=0 ; i< a ;i ++)
    {
        int x;
        
        string bro ;
        getline(cin,bro);
        x=stoi(bro);
        getline(cin,bro);

        arr[x-1]=bro;
        
    }
    for(int i=0;i<a; i++)
    {
        printf("Chapter %d\n",i+1);
        cout << arr[i] << endl;
    }
}