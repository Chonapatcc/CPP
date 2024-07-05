#include <iostream>
using namespace std;



void printResult(int value)
{
    cout << value << " = ";
    if(value<2)
    {
        cout << value;
        return ;
    }
    int ch =0 ;
    for(int i=2 ; i< 1000000; i++)
    {
        int count =0;
        
        while(value%i==0)
        {
            value/=i;
            count+=1;
        }
        if(count)
        {
            if (ch)
            {
                cout << " x ";
            }
            else
            {
                ch = 1;
            }
            cout << i;
            if(count>1)
            {
                cout << "^"<<count;
            }
        }
        if(value<2)
        {
            break;

        }
    }
    if(value>1)
    {
        if(ch)
        {
            cout << " x ";
        }
        cout << value;
    }
}
int main()
{
    int value ;
    cin>>value;
    printResult(value);
        
  
}