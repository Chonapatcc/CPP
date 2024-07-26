#include <bits/stdc++.h>
using namespace std;

void miniPrintBottle(stack<string>bottle)
{
    if(bottle.empty())
    {
        return ;
    }
    
    
    string name = bottle.top();
    bottle.pop();
    miniPrintBottle(bottle);


    cout << name << " ";

}

void printLine(queue<string> line)
{
    cout << "Remaining Tickets In The Line: ";

    queue<string> copy = line;
    while(!copy.empty())
    {
        string name = copy.front();
        cout << name << " ";
        copy.pop();
    }

}

void printBottle(stack<string> bottle)
{
    cout << "Remaining Tickets In The Bottle: ";
    miniPrintBottle(bottle);
}

int checker(string name,stack<string> bottle, queue<string>line)
{
    if(name=="e" or name =="E")
    {
        if(!bottle.empty())
        {
            string val = bottle.top();
            bottle.pop();
            line.push(val);
            return 1;
        }
        return 1;
    }
    else if(name=="d" or name =="D")
    {
        if(!line.empty())
        {
            string val = line.front();
            line.pop();
            bottle.push(val);
            return 1;
        }
        return 1;
    }
    else if(name=="p" or name == "P")
    {
        printLine(line);
        printBottle(bottle);
        cout << "===================="<<endl;
        return 1;

    }
    else if(name=="q" or name == "Q")
    {
        return 0;
    }
    else
    {
        cout << "Input Error" <<endl;
        return 0;
    }

}

string arrayToString(char * a)
{
    string t = "";
    for(int i =0 ; i < strlen(a) ; i++)
    {
        t+=a[i];
    }
    return t;
}

int main()
{
    stack<string> bottle;
    queue<string> line;
    char longText[101];
    cin.getline(longText,101);
    char *ptr;
    ptr = strtok(longText," ");
    while(ptr!=NULL)
    {
        string t = arrayToString(ptr);
        bottle.push(t);
        ptr = strtok(NULL," ");
    }
    while(1)
    {
        string input;
        cin>>input;
        int ch = checker(input,bottle,line);
        if(!ch)
        {
            break;
        }

    }
}