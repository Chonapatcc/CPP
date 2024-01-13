#include <bits/stdc++.h>
using namespace std;


int main()
{
    int ax,ay;
    int bx,by;
    scanf("%d %d\n",&ax,&ay);
    scanf("%d %d\n",&bx,&by);
    if(ay!=bx)
    {
        cout << "Cant calculate !";
        exit(0);
    }
    int aarr[ax][ay];
    int barr[bx][by];

    for(int i =0 ; i<ax ; i++)
    {
        string a;
        getline(cin,a);
        a+=' ';
        string temp="";
        int num =0 ; 
        for(int y =0 ; y< a.length() ; y++)
        {
            if(a[y]==' ')
            {   
                aarr[i][num++]=stoi(temp);
                temp="";
            }
            else
            {
                temp+=a[y];
            }
        }
    }
    for(int i =0 ; i<bx ; i++)
    {
        string a;
        getline(cin,a);
        a+=' ';
        string temp="";
        int num =0 ; 
        for(int y =0 ; y< a.length() ; y++)
        {
            if(a[y]==' ')
            {   
                barr[i][num++]=stoi(temp);
                temp="";
            }
            else
            {
                temp+=a[y];
            }
        }
    }
    
    // for(int i =0 ; i< ax;  i++)
    // {
    //     for(int y =0 ;y<ay ;y++)
    //     {
    //         cout << aarr[i][y] <<" " ;
    //     }
    //     cout <<endl;
    // }
    // for(int i =0 ; i< bx;  i++)
    // {
    //     for(int y =0 ;y<by ;y++)
    //     {
    //         cout << barr[i][y] <<" " ;
    //     }
    //     cout <<endl;
    // }

    int ans[ax][by];

    for(int i =0 ; i<ax ; i++)
    {
        for(int y=0 ; y<by;  y++)
        {
            int sum=0 ; 

            for(int z= 0 ; z<ay; z++)
            {
                sum+=aarr[i][z]*barr[z][y];
            }
            ans[i][y]=sum;
        }
    }

    for(int i=0 ; i<ax ;i++)
    {
        cout << "[";
        for(int y= 0 ;y<by ;y++)
        {
            if(y!=0)
            {
                cout<< " ";
            }
            cout << ans[i][y];
            
        }
        cout <<"]"<<endl;
    }

}
