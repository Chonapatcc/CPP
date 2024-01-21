#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100] ={};

    int id=0;
    char x;
    cin>>x;
    
    while(x!='-')
    {
        if(x-'0' <=0 or x-'0'>5)
        {

            cout <<"Error! Not have this floor";
            exit(0);
        }
        arr[id++] = x-'0';
        cin>>x;
    }
    for(int i=0 ; i<id;i++)
    {
        for(int y=i+1; y<id ;y++)
        {
            if(arr[i]>arr[y])
            {
                int temp=arr[i];
                arr[i]=arr[y];
                arr[y]=temp;
            }
        }
    }
    
    cout << "OK! Wait please\n---------------\nLift is arriving!"<<endl;
    for(int i=0 ; i< id ; i++)
    {
        string t;
        if(arr[i]==1)
        {
            t="1st";
        }
        else if(arr[i]==2)
        {
            t="2nd";
        }
        else if(arr[i]==3)
        {
            t="3rd";
        }
        else
        {
            t=to_string(arr[i])+"th";
        }
        cout << "---------------" <<endl;
        
        cout << "Lift is going up!" <<endl;
        cout << "---------------" <<endl;
        cout <<"Lift has reached the "<<t<<" floor!"<<endl;
        

    }


}