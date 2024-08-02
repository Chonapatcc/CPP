#include <iostream>
#include <queue>
#include <stack>
#include <iomanip>
using namespace std;

int precedence(char t)
{
    if(t=='+' or t=='-')
    {
        return 1;
    }

    if(t=='*' or t=='/')
    {
        return 2;
    }

    return 0;
}

string toPostfix(string t)
{
    stack<char> st;
    string postfix = "";

    for (int i = 0; i < t.length(); i++) 
    {
        char c = t[i];
        if (isalnum(c) or c=='.')
            postfix += c;
        else if (c == '(')
            st.push('(');
        else if (c == ')') {
            if(st.empty())
            {
                return "unbalance";
            }
            while (st.top() != '(') 
            {
                postfix += st.top();
                st.pop();
                if(st.empty())
                {
                    return "unbalance";
                }
            }
            st.pop();
        }
        else 
        {
            while (!st.empty()&& precedence(c) <= precedence(st.top())) 
            {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) 
    {
        if(st.top() == '(' or st.top() == ')')
        {
            return "unbalance";
        }
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

string insertZeroOne(string t )
{
    int size = t.length();
    string newT = "";
    int newTSize = 0;
    for(int i =0 ; i<size;i++)
    {
        if(precedence(t[i]))
        {
            char x = 47+precedence(t[i]);
            if(i-1<0 or (i-1>=0 and t[i-1]!=')' and !isalnum(t[i-1]) and !isalnum(newT[newTSize-1])))
            {
                newT+=x;
                newTSize++;
            }
            newT+=t[i];
            newTSize++;
            if(i+1>=size or (i+1<size and t[i+1]!='(' and !isalnum(t[i+1])))
            {
                newT+=x;
                newTSize++;
            }
        }
        else
        {
            newT+=t[i];
            newTSize++;
        }
    }
    return newT;
}

string replaceWithX(string t,queue<double> *numQueue)
{
    string newT = "";
    string temp = "";
    int size = t.length();
    queue<double> storeNum;
    int ch = 0 ; 
    for(int i= 0 ; i<size ; i++)
    {
        char x = t[i];
        if(isdigit(x) or x=='.')
        {
            if(ch)
            {
                temp+=x;
            }
            else
            {
                temp= x;
                ch = 1;
            }
        }
        else
        {
            if(temp!="")
            {
                double num = stod(temp);
                storeNum.push(num);
                newT += 'X';
            }
            temp = "";
            ch = 0 ;
            newT+=x;
        }
    }
    if(temp!="")
    {
        double num = stod(temp);
        storeNum.push(num);
        newT += 'X';
    }
    *numQueue = storeNum;
    return newT;
}

void translatePostfix(string postfix,queue<double> *storeNum)
{
    stack<double> op;
    int opCh = 0;
    int size = postfix.length();
    for(int i =0 ; i<size; i ++)
    {
        char x = postfix[i];
        if(x=='X')
        {
            op.push(storeNum->front());
            storeNum->pop();
        }
        else if(precedence(x))
        {
            double val2 = op.top();
            op.pop();

            double val1 = op.top();
            op.pop();

            double result;
            if(x=='+')
            {
                result = val1+val2;  
            }
            else if(x=='-')
            {
                result = val1-val2;
            }
            else if(x=='*')
            {
                result = val1*val2;
            }
            else if(x=='/')
            {
                result = val1/val2;
            }
            op.push(result);
            // cout << result << endl;
        }
    }
    if(!op.empty())
        cout << fixed << setprecision(2) <<op.top();
    else
        cout << 0.00;
}

int main()
{
    string t;
    cin>>t;
    
    t = insertZeroOne(t);
    // cout << t <<endl;

    //replace num with x first;
    queue<double>storeNum;
    t = replaceWithX(t,&storeNum);
    // cout << t <<endl;
    
    //to postfix
    string postfix = toPostfix(t);
    if(postfix == "unbalance")
    {
        cout << "Error: Unbalanced parenthesis";
        return 0;
    }
    // cout << postfix;

    //translate posfix;
    translatePostfix(postfix,&storeNum);
    
}