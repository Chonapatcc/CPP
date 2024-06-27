#include <bits/stdc++.h>
using namespace std;

void printBracket(int n,int size)
{
    cout <<setw(size)<< n <<" | ";
    for(int i =0 ; i< n ;i++)
    {
        cout << "[]" ;
    }
    cout <<endl;
}

int is_Digit(string text)
{
    for(int i= 0 ; i< text.length(); i++)
    {
      if(isdigit(text[i])==0)
      {
        return 0;
      }  
    }
    return 1;
}

int main()
{
    string input;

    cin>>input;
    int list[100];
    int index=0;
    int max_size =0;
    while(input!="-1")
    {
        if(is_Digit(input))
        {
            list[index++] = stoi(input);
            if(input.length() >max_size)
            {
                max_size= input.length();
            }
        }

        cin>>input;
    }

    for(int i= 0 ; i< index;i++)
    {
        printBracket(list[i],max_size);
    }
}