#include <iostream>
#include <stack>
#include <iomanip>
#include <queue>
using namespace std;

void printStack(stack<char> *op)
{
    if(op->empty())
        return ;

    char x = op->top();
    op->pop();
    printStack(op);
    cout << " " <<x;
}

void printQueue(queue<double> *op)
{
    while(!op->empty())
    {
        cout << op->front() << " ";
        op->pop();
    }
    cout << endl;
}

int precedence(char op)
{
    if(op=='+' or op=='-')
        return 1;
    
    if(op=='*' or op=='/')
        return 2;
    
    return 0 ;
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
            while (st.top() != '(') 
            {
                postfix += st.top();
                st.pop();
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
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int checkBalance(string t)
{
    int n =0;
    for(int i= 0 ;i <t.length();i++)
    {
        if(t[i]=='(')
            n--;
        
        if(t[i] == ')')
            n++;
    }
    return n;
}

string clean1(string t)
{
    // check next;
    int size = t.length();
    int id1 =0 ;
    int id2 =1 ;
    //delete inside;
    while(1)
    {
        if(id1>=size or id2>=size)
        {
            break;
        }
        if(t[id1]=='(')
        {
            while(1)
            {
                if(id1>=size or id2>=size)
                {
                    break;
                }
                if(t[id2]=='*' or t[id2]=='/' or t[id2]=='+')
                {
                    t[id2] = 'X';
                    
                }
                else if(t[id2]!='-')
                {
                    id1 = id2;
                    id2++;
                    break;
                }
                id2++;
            }
        }
        else if(t[id2]==')')
        {
            while(1)
            {
                if(id1>=size or id2>=size)
                {
                    break;
                }
                if(precedence(t[id1]))
                {
                    t[id1] = 'X';
                    id1--;
                }
                else
                {
                    id1 = id2;
                    id2++;
                    break;
                }
            }
        }
        id1++;
        id2++;
    }
    //delete outside
    int id =0 ;
    while(1)
    {
        if(id>=size)
        {
            break;
        }
        if(t[id]=='+' or t[id] == '/' or t[id] =='*')
        {
            t[id] = 'X';
        }
        else
        {
            break;
        }
        id++;
    }
    id = size-1;
    while(1)
    {
        if(id<0)
        {
            break;
        }
        if(precedence(t[id]))
        {
            t[id] = 'X';
        }
        else
        {
            break;
        }
        id--;
    }
    //delete 'X'
    string newT="";
    for(int i =0 ; i<size;i++)
    {
        if(t[i]!='X')
        {
            newT+=t[i];
        }
    }
    return newT;
}

string insertNum(string t,queue <double> *storeNum)
{
    int size = t.length();
    queue<double> newStoreNum;
    string newT = "";
    for(int i= 0 ; i< size ;i ++)
    {
        char x = t[i];
        if(x=='X')
        {
            newStoreNum.push(storeNum->front());
            storeNum->pop();
            newT +='X';
        }
        else if(precedence(x)==1)
        {  
            int ch = 1;
            if(i-1 > 0 and t[i-1] == '(') 
            {
                newStoreNum.push(0);
                newT += 'X';
                newT +=x;
                ch = 0;
            }
            if(i+1 <size and t[i+1] == ')')
            {
                newStoreNum.push(0);
                if(ch)
                {
                    newT +=x;
                }
                newT += 'X';
                ch = 0;
            }
            if(ch)
            {
                newT+=x;
            }
        }
        else if(precedence(x)==2)
        {
            int ch  = 1;
            if(i-1 > 0 and t[i-1] == '(') 
            {
                newStoreNum.push(1);
                newT += 'X';
                newT +=x;
                ch =0 ;
            }
            if(i+1 <size and t[i+1]==')')
            {
                newStoreNum.push(1);
                if(ch)
                {
                    newT +=x;
                }
                newT += 'X';
                ch = 0;
            }
            if(ch)
            {
                newT+=x;
            }
        }
        else
        {
            newT+=x;
        }
    }
    *storeNum = newStoreNum;
    return newT;
}
int main()
{
    string t;
    cin>>t;
    if(checkBalance(t))
    {
        cout << "Error: Unbalanced parenthesis" <<endl;
        return 0;
    }
    t= clean1(t);

    string temp="";
    int ch =0 ;
    string newT= "";
    queue<double> storeNum;
    //replace X to num;
    int size = t.length();
    for(int i= 0 ; i<size ; i++)
    {
        char x = t[i];
        if(isalnum(x) or x=='.')
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
    newT = insertNum(newT,&storeNum);
    // cout << newT <<endl;
    // queue<double> copyStoreNum = storeNum;
    // printQueue(&copyStoreNum);

    string postfix = toPostfix(newT);
    // cout << postfix << endl;

    stack<double> op;
    int opCh = 0;
    size = postfix.length();
    for(int i =0 ; i<size; i ++)
    {
        char x = postfix[i];
        if(x=='X')
        {
            op.push(storeNum.front());
            storeNum.pop();
        }
        else
        {
            double val2 = 0;
            int ch1=0,ch2=0;
            
            if(!op.empty())
            {
                val2 = op.top();
                op.pop();
                ch2 = 1;
            }
            double val1 = 0;
            if(!op.empty())
            {
                val1 = op.top();
                op.pop();
                ch1 = 1;
            }

            double result;
            if(x=='+')
            {
                result = val1+val2;
                
            }
            if(x=='-')
            {
                result = val1-val2;
            }
            if(x=='*')
            {
                if(ch1 and ch2)
                {
                    result = val1*val2;
                    
                }
                else
                {
                    result = val2;
                }

            }
            if(x=='/')
            {
                if(ch1 and ch2)
                {
                    result = val1/val2;
                    
                }
                else
                {
                    result = val2;
                }
            }
            // cout << result <<endl;
            op.push(result);
        }
    }
    cout << fixed << setprecision(2) <<op.top();
}