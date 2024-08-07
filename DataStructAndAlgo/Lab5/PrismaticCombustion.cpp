#include<bits/stdc++.h>
using namespace std;

void recur(double m , int *green,int *purple,int *blue,int *yellow,string stat)
{
    // cout << stat << " " << m << endl;
    if(m<=1)
    {
        return; 
    }
    if(stat == "white")
    {
        m--;
        (*green) ++;
        recur(m,green,purple,blue,yellow,"green");
    }
    else if(stat=="green")
    {
        if(m<=20)
        {
            m--;
            (*yellow) ++;
            recur(m,green,purple,blue,yellow,"yellow");
        }
        else if(m<=50)
        {
            m = (m *(100-20)/100);
            (*blue) ++;
            recur(m,green,purple,blue,yellow,"blue");
        }
        else if(m >50)
        {
            m =(m *(100-50)/100);
            (*purple) ++;
            recur(m,green,purple,blue,yellow,"purple");
        }
    }
    else if(stat=="purple")
    {
        recur(m*70/100,green,purple,blue,yellow,"blue");
        recur(m*30/100,green,purple,blue,yellow,"green");
        (*blue) ++;
        (*green) ++;
    }
    else if(stat=="blue")
    {
        if(m>=100)
        {
            recur(m*(100-10)/100,green,purple,blue,yellow,"yellow");
            (*yellow)++; 
        }
        else
        {
            if(m>=10)
            {
                recur(m-10,green,purple,blue,yellow,"purple");
                (*purple)++; 
            }
        }
    }
    else if(stat=="yellow")
    {
        recur(m*10/100,green,purple,blue,yellow,"green");
        recur(m*15/100,green,purple,blue,yellow,"purple");
        recur(m*25/100,green,purple,blue,yellow,"blue");
        (*green) ++;
        (*purple) ++;
        (*blue) ++;
    }

}

int main()
{
    double m;
    cin>>m;

    int green=0,purple =0 ,blue =0 ,yellow =0 ;
    recur(m,&green,&purple,&blue,&yellow,"white");

    cout << green <<" " <<purple << " "<<blue<< " "<<yellow <<endl;
}