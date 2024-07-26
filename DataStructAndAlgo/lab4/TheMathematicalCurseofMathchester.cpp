#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<char> *op)
{
    if(op->empty())
    {
        return ;
    }
    char x = op->top();

    op->pop();
    printStack(op);
    cout << " " <<x;
}
int main()
{
    stack<char> op;

    string text;
    getline(cin,text);

    int leftPar = 0,rightPar = 0;
    string newT = "";
    int ch =1;
    for(int i =0 ;i<=sizeof(text); i++)
    {
        
        if(text[i]=='(')
        {
            leftPar++;
            op.push(text[i]);
            ch = 0;
        }  
        else if(text[i] == ')')
        {
            rightPar++;
            while(1)
            {
                if(op.empty())
                {
                    break;
                }
                if(op.top()=='(')
                {
                    op.pop();
                    break;
                }
                char x = op.top();
                newT+=x;
                op.pop();
            }
            ch =0 ;
        }
        else if(text[i] == '+' or text[i] == '-')
        {
            
            if(!op.empty() and op.top()!='(')
            {
                char x = op.top();
                newT+=x;
                op.pop();
            }
            op.push(text[i]);
            ch =0 ;
        }
        else if(text[i] == '*' or text[i] == '/')
        {
            if(!op.empty() and (op.top() == '+' or op.top()=='-'))
            {
                op.push(text[i]);
            }
            else
            {
                if(!op.empty() and op.top()!='(')
                {
                    char x = op.top();
                    newT+=x;
                    op.pop();
                }
                op.push(text[i]);
            }
            ch =0;
        }
        else
        {
            if(!ch)
            {
                newT+=' ';
                ch = 1;
            }
            newT += text[i];

    }
    while(1)
    {
        if(op.empty())
        {
            break;
        }
        char x = op.top();
        newT+=x;
        op.pop();
    }
    // cout << leftPar <<" " <<rightPar <<endl;
    if(leftPar !=rightPar)
    {
        cout << "Error: Unbalanced parenthesis" <<endl;
    }
    else
    {
        cout << newT <<endl;
    }
}