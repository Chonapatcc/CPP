#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9][9];

    for(int i =0 ; i<9 ; i++)
    {
        for(int y= 0 ; y<9 ; y++)
        {
            cin>>arr[i][y];
        }
    }
    int sum = 9*10/2;
    //cout << sum ;
    int ch=1;
    for(int i =0 ; i<9 ; i++)
    {
        int row=0;
        int column=0;
        int xxrow[10]={};
        int xxcolumn[10] ={};
        for(int y= 0 ; y<9 ; y++)
        {
            if(arr[i][y]!=0)
            {
                if(!xxrow[arr[i][y]-1])
                {
                    xxrow[arr[i][y]-1]=1;
                }
                else
                {
                    cout << "False";
                    exit(0);
                }
                
            }
            if(arr[y][i]!=0)
            {
                if(!xxcolumn[arr[y][i]-1])
                {
                    xxcolumn[arr[y][i]-1]=1;
                }
                else
                {
                    cout << "False";
                    exit(0);
                }
                //cout << arr[y][i] << " ";

            }
            //cout << arr[y][i] << " ";
        }
        //cout << endl;
        
        
       
    }
    for(int i =0 ; i<9 ; i+=3)
    {
        for(int y =0 ; y<9 ; y+=3)
        {
            int xx[10]  = {};
            for(int i2= i ; i2<i+3 ;i2++)
            {
                for(int y2 = y; y2<y+3 ;y2++)
                {
                    
                    if(arr[i2][y2]!=0)
                    {
                        if(!xx[arr[i2][y2]-1])
                        {
                            xx[arr[i2][y2]-1]=1;
                        }
                        else
                        {
                            cout << "False";
                            exit(0);
                        }
                        //cout << arr[i2][y2] <<" " ;
                    }
                    //cout << arr[i2][y2] << " ";
                     
                }
                //cout << endl;
            }
            
        }
    }
    cout << "True";

    



}