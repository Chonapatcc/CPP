#include <iostream>
using namespace std;
//y^2+x^2-y+3x^2=1-2x
//Ax^2 + Bx^2 + Cx +Dy +E
int checkPosition(string position,int ch2)
{
    int index =0 ;
    if(position == "x")
    {   
        if(ch2)
        {   
            index = 0;
        }
        else
        {
            index = 2;
        }
    }
    else if(position == "y")
    {
        if(ch2)
        {
            index = 1;
        }
        else
        {
            index = 3;
        }
    }
    else
    {
        index = 4;
    }
    return index;
}
int checkValue(string temp)
{
    int value;
    if(temp=="" or temp=="+" or temp==" ")
    {
        value = 1;
    }
    else if(temp=="-")
    {
        value =-1;
    }
    else
    {
        value = stoi(temp);
    }
    return value;
}
int* getValue(string text , int size)
{
    int *values= new int(5);
    for(int i= 0 ; i<5;i++)
    {
        values[i] = 0 ;
    }
    string temp = "";
    string position = "";
    string sign = "+";
    int ch= 0 ;
    for(int i= 0 ; i< size;i++)
    {
        if(text[i]==' ')
        {
            continue;
        }
        if(text[i]=='x' or text[i]=='y' )
        {
            ch = 1;
            position = text[i];
            continue;
        }
        if(text[i]=='+' or text[i]=='-')
        {
            if(temp=="")
            {
                temp+=text[i];
                continue;
            }
            else
            {
                ch =1 ;
            }
        }
        if (ch)
        {
            int ch2 = 0 ;
            if(text[i]=='^')
            {
                i+=2;
                ch2 = 1;
            }
            // cout << "|"<<temp<<"|" <<endl;
            int index;
            int value;
            index = checkPosition(position, ch2);
            value = checkValue(temp);
            values[index] += value;
            // cout << "index = " << index<<" value =  "<<value <<endl;

            if(i<size)
            {
                temp = text[i];
            }
            else
            {
                temp = "";
            }
            
            ch =0;
            position = "";
        }
        else
        {
            temp+=text[i];
        }
    }
    if(temp!="" or ch)
    {
        int index;
        int value;
        index = checkPosition(position, 0 );
        value = checkValue(temp);
        values[index] += value;
        // cout << "index = " << index<<" value =  "<<value <<endl;
        // cout << "cat";
    }
    // cout << "|"<<temp<<"|" <<endl;
    // for(int i =0 ; i< 5; i ++)
    // {
    //     cout <<"i = " << i << " : "<< values[i] << endl;
    // }
    return values ;
}
int main()
{
    int enemies ;
    cin>>enemies;
    long long int xPos[enemies];
    long long int yPos[enemies];
    for(int i= 0 ; i< enemies;i++)
    {
        cin >> xPos[i] >>yPos[i];
    }
    string text;
    cin>>text;
    int size = text.length();
    string text1 = "";
    string text2 = "";
    int ch =0 ;
    for(int i= 0 ; i<size; i++)
    {
        if(text[i]=='=')
        {
            ch = 1;
            continue;
        }
        if(ch)
        {
            text2+=text[i];
        }
        else
        {
            text1+=text[i];
        }
    }
    /////////////////////
    int size1 = text1.length();
    int size2 = text2.length();
    
    int *val1 = getValue(text1,size1);
    int *val2 = getValue(text2,size2);
    
    // test ##########################
    // cout << "val1 ###" <<endl;
    // for(int i =0 ; i <5 ;i ++)
    // {
    //     cout <<val1[i] <<" ";
    // }
    // cout <<endl;
    // cout << "val2 ###" <<endl;
    // for(int i =0 ; i <5 ;i ++)
    // {
    //     cout <<val2[i] <<" ";
    // }
    // cout<<endl;
    // test #########################

    
    // get final result
    for(int i =0 ; i< 5; i++)
    {
        val1[i] -=val2[i];
    }

    // test ######################
    // cout<< "final result" <<endl;
    // for(int i =0 ; i <5 ;i ++)
    // {
    //     cout << val1[i] << " ";
    // }
    // cout <<endl;

    // for(int i =0 ; i <5 ;i ++)
    // {
    //     cout <<i <<" : "<< val2[i] << endl;
    // }
    // test######################
    
    long long a,b,c,d,e;
    a = val1[0];
    b = val1[1];
    c = val1[2];
    d = val1[3];
    e = val1[4];

    for(int i =0 ;i <enemies ;i++)
    {
        long long int x,y;
        x= xPos[i];
        y= yPos[i];
        string toPrint;
        long long int cal;
        cal = a*x*x + b*y*y + c*x + d*y + e;
        // cout << cal;
        if(cal==0)
        {
            toPrint = "TRUE";
        }
        else
        {
            toPrint = "FALSE";
        }
        cout << "(" <<x <<", "<<y<<")" <<" " <<toPrint<<endl;
    }
    // cout << stoi("-2") <<endl;
    // cout << text2 <<endl;
}