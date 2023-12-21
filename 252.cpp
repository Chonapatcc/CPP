#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int a2=sqrt(a);

    int n=1;
    int arr[a2][a2];

    for(int i =0 ; i <a2 ;i++)
    {
        for(int y =0 ; y< a2 ; y++)
        {
            arr[i][y]=0;
            n++;
        }
    }
    n=1;
    int x=0,y=0,ind=1,way=0;
    int down=0,right=0,up=0,left=0;
    
    while (n<=a)
    {
        way%=4;
        //cout << way << endl;
        if(way==0)
        {
            while(x<a2 and arr[x][y]==0)
            {
                arr[x][y]=n;
                n++;
                x++;
            }
            x--;
            y++;
            down++;
        }
        else if(way==1)
        {
            while(y<a2 and arr[x][y]==0)
            {
                arr[x][y]=n;
                n++;
                y++;
            }
            y--;
            x--;
            right++;
        }
        else if(way==2)
        {
            while(x>=0 and arr[x][y]==0)
            {
                arr[x][y]=n;
                n++;
                x--;
            }
            x++;
            y--;
            up++;
        }
        else
        {
            while(y>=0 and arr[x][y]==0)
            {
                arr[x][y]=n;
                n++;
                y--;
            }
            y++;
            x++;
            left++;
        }
        way++;
    }
    

    for(int i =0 ; i< a2 ;i++)
    {
        for(int y=0 ;y<a2;y++)
        {
            printf("%03d ",arr[i][y]) ;
        }
        
        cout <<endl;
    }
    cout <<"UP : "<<up<<endl;
    cout <<"DOWN : "<<down<<endl;
    cout <<"LEFT : "<<left<<endl;
    cout <<"RIGHT : "<<right<<endl;
    
    

}