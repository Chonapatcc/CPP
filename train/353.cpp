#include <bits/stdc++.h>
using namespace std;


int main()
{
    string arr[100] ={};
    int index=0;

    string input ;
    cin>>input;
    while(input !="exit")
    {   
        arr[index] = input;
        index++;
        cin >>input;
    }

    cout <<"Shopping list"<<endl;

    for(int i =0 ; i< index ; i++)
    {
        string tp =arr[i];
        
        if(tp=="")
        {
            continue;
        }

        int c=1;
        for(int y= i+1 ;y<index ;y++)
        {
            if(arr[y]==tp)
            {
                c++;
                arr[y] = "";
            }
        }
        cout <<"Buy " <<c <<" "<<tp<<endl;
    }
    if(index==0)
    {
        cout <<"Nothing..."<<endl;
    }

}