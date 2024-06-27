#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ls,ch;

    int p1=0,p2=0,score;
    string sc="pnbrqk";
    int sci[6]={1,3,3,5,9,0};
    for(int i =0;i<8;i++)
    {
        getline(cin,ls);
        for(int y=0;y<8;y++)
        {
            
            if(ls[y]!='.')
            {   
                if(islower(ls[y]))
                {
                    p2+=sci[sc.find(ls[y])];
                }
                else
                {
                    ch=tolower(ls[y]);  
                    p1+=sci[sc.find(ch)];
                }
            }
        }
    }
    int dif=p1-p2;
    if(dif==0)
    {
        cout << "equal";
    }
    else
    {
        cout << dif;
    }
}