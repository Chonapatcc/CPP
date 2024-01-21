#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    scanf("(%d,%d)",&x,&y);

    string dir;

    cin>>dir;
    int wy[4]={1,0,-1,0} ;
    int wx[4]={0,1,0,-1};
    while(dir!="END")
    {
        if(dir=="FW")
        {
            
        }
        else if(dir=="BK")
        {
            for(int i =0 ; i<4; i++)
            {
                wy[i]=-wy[i];
                wx[i]=-wx[i];
            }
        }
        else if(dir=="R")
        {
            int temp = wy[0];
            for(int i =0; i < 3 ; i++)
            {
                wy[i]=wy[i+1];
            }
            wy[3]=temp;

            temp = wx[0];
            for(int i =0; i < 3 ; i++)
            {
                wx[i]=wx[i+1];
            }
            wx[3]=temp;

        }
        else if(dir=="L")
        {
            int temp = wy[3];
            for(int i =3; i >0 ; i--)
            {
                wy[i]=wy[i-1];
            }
            wy[0]=temp;

            temp = wx[3];
            for(int i =3; i >0 ; i--)
            {
                wx[i]=wx[i-1];
            }
            wx[0]=temp;

        }
        x+=wx[0];
        y+=wy[0];
        cin>>dir;
    }
    printf("(%d,%d)",x,y);
}