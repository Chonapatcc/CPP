#include <bits/stdc++.h>
using namespace std;

void removeSpace(string array[] , int index)
{
    for(int i =0 ; i<index-1; i++)
    {
        if(array[i]=="")
        {
            array[i] = array[i+2];
            array[i+2] ="";
        }
    }
}

int Cal(string array[] ,int index)
{   int ch=0;
    double cal=0;
    for(int i =0 ; i< index ;i++)
    {
        if(array[i]=="+")
        {
            double a = stoi(array[i-2]);
            double b = stoi(array[i-1]);
            cal =a+b;
            ch=1;
        }
        else if(array[i]=="-")
        {
            double a = stoi(array[i-2]);
            double b = stoi(array[i-1]);
            cal =a-b;
            ch=1;
        }
        else if(array[i]=="*")
        {
            double a = stoi(array[i-2]);
            double b = stoi(array[i-1]);
            cal =a*b;
            ch=1;
        }
        else if(array[i]=="/")
        {   
            double a = stoi(array[i-2]);
            double b = stoi(array[i-1]);
            cal =a/b;
            ch=1;
        }
        if(ch)
        {
            array[i-2]=to_string(cal);
            array[i-1]="";
            array[i] ="";
            break;
        }
    }
    //cout << cal <<endl;
    removeSpace(array,index);
    return index-2;
}

void printArray(string array[] , int size)
{
    for(int i =0 ;i< size; i ++)
    {
        cout << array[i] <<" ";

    }
    cout <<endl;
}

int main()
{
    string input , array[100];
    int index;

    while(cin>>input)
    {
        if(input=="end")
        {
            break;
        }

        array[index++] = input;
    }
    while(index>1)
    {
        index = Cal(array,index);
        //printArray(array,index);

    }
    double ans = stof(array[0]);
    cout <<fixed <<setprecision(2)<<ans; 
}