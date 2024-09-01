#include <bits/stdc++.h>
using namespace std;

void func(string command ,stack<string> &st)
{
   stack<char> tempST;
   for(int i= 0 ;i < command.length(); i++)
   {
        if(command[i] == '(')
        {
            tempST.push(command[i]);
        }
        else if(command[i] == ')')
        {
            string x= "";
            while(!tempST.empty())
            {
                if(tempST.top() == '(')
                {
                    tempST.pop();
                    break;
                }
                x=tempST.top()+x;
                tempST.pop();
            }
            func(x,st);
        }
        else if(command[i] == ',')
        {
            string x= "";
            while(!tempST.empty())
            {
                if(tempST.top() == '(')
                {
                    break;
                }
                x=tempST.top()+x;
                tempST.pop();
            }
            func(x,st);
        }
        else if(command[i]!=' ') 
        {
            tempST.push(command[i]);
        }
    }
    string x= "";
    while(!tempST.empty())
    {
        x=tempST.top()+x;
        tempST.pop();
    }
    if(x!="")
    {
        st.push(x);
    }
}

int main()
{
    while(1)
    {
        string command = "size(intersection(A, C), intersection(A, C))";
        getline(cin,command);
        stack<string> st;
        func(command,st);

        while(!st.empty())
        {
            cout << st.top() <<endl;
            st.pop();
        }
        break;
    }
}