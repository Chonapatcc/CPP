#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name[]={"Dog","Cat","Chicken","Duck","Cow","Bird","Snake"};
    int arr[]={4,4,2,2,4,2,0};

    int sum=0 ;
    for(int i=0 ; i< 3 ; i++)
    {
        int n;
        string t;
        cin>>t>>n;
        for(int y=0 ; y<sizeof(name)/sizeof(name[0]); y++)
        {  
            if(t==name[y])
            {
                sum+=arr[y]*n;

                break;
            }
        }
    }
    cout << sum ;
}