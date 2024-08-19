#include <iostream>
#include <stack>
#include <vector>
using namespace std;
bool isOperator(string c) {
    return (c == "~" || c == "/\\" || c == "\\/" || c == "->" || c == "<->");
}

bool evaluate(bool a, bool b, string op) {
    if(op == "~") return !b;
    else if (op == "/\\") return a && b;
    else if (op == "\\/")  return a || b;
    else if ( op == "->") return !(a and not b);
    else if ( op ==  "<->") return a == b;
    return false; 
}

int main() {
    int n;
    cin >> n;
    vector<bool> truthValues(26);
    for (int i = 0; i < n; ++i) {
        char value;
        cin >> value;
        truthValues[i] = (value == 'T');
    }
    string c;
    stack<bool> s;
    while(cin>>c and c!="end")
    {
        if (isalpha(c[0])) 
        {
            s.push(truthValues[c[0] - 'A']); 
        } 
        else if (isOperator(c)) 
        {
            if (c == "~") 
            {
                bool b = s.top(); s.pop();
                s.push(evaluate(false, b, c));
            } 
            else 
            { 
                bool b = s.top(); s.pop();
                bool a = s.top(); s.pop();
                s.push(evaluate(a, b, c));
            }
        } 
    }
    cout << (s.top() ? 'T' : 'F') << endl;
    return 0;
}