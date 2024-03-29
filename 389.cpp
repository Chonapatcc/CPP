#include <iostream>
using namespace std;

void printDot(int num)
{
    for(int i =0 ; i< num ; i++)
    {
        cout <<'.';
    }
    cout <<endl;
}

int main()
{
    string input;
    cin>>input;
    for(int i=input.length()-1 ; i>=0 ; i--)
    {
        printDot(input[i]-'0');
    }
}