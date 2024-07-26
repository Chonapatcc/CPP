#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

void printBottle(stack<string> *bottle)
{
    if(!bottle->empty())
    {
        string t = bottle->top();
        bottle->pop();
        
        if(bottle->empty())
        {
            cout << t;
            return ;
        }
        else
        {

            printBottle(bottle);
            cout << " " << t; 
        }
    }    
}

void printLine(queue<string> *line)
{
    if(!line->empty())
    {
        string t = line->front();
        cout << t;
        line->pop();
        if(!line->empty())
        {
            cout << " ";
            printLine(line);
        }
    }
}

int main()
{
    string text;
    getline(cin,text);

    stack<string> bottle;
    queue<string> line;

    //get input
    stringstream s(text);
    string t ;
    while(s>>t)
    {
        bottle.push(t);
    }


    while(1)
    {
        string input ;
        cin>>input;

        if(input == "e" or input == "E")
        {
            if(!bottle.empty())
            {
                string t = bottle.top();
                bottle.pop();
                line.push(t);
            }
        
        }
        else if(input == "d" or input == "D")
        {
            if(!line.empty())
            {
                string t = line.front();
                line.pop();
                bottle.push(t);
            }
        }
        else if(input == "p" or input == "P")
        {
            queue<string> copyLine = line;
            cout << "Remaining Tickets In The Line: ";
            if(copyLine.empty())
            {
                cout << "Line Is Empty";
            }
            else
            {
                printLine(&copyLine);
            }
            cout << endl;

            stack<string> copyBottle = bottle;
            cout << "Remaining Tickets In The Bottle: ";
            if(copyBottle.empty())
            {
                cout << "Bottle Is Empty";
            }
            else
            {
                printBottle(&copyBottle);
            }
            cout << endl;

            cout << "====================" <<endl ;
        }
        else if(input == "q" or input =="Q")
        {
            break;
        }
        else
        {
            cout << "Input Error" <<endl;
            break;
        }
    }
    
}