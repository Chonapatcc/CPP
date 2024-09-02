#include<bits/stdc++.h>
using namespace std;


void printSet(const set<int>& s) 
{
    if(s.size()==0)
    {
        cout << "{ }" <<endl;
        return ; 
    }
    cout << "{";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it;
        if (next(it) != s.end()) {
            cout << ", ";
        }
    }
    cout << "}" <<endl;
}

void func(string command ,queue<string> &st)
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

set<int> getComplement(const set<int>& s, int maxVal) {
    set<int> complementSet;
    for (int i = 0; i <= maxVal; ++i) {
        if (s.find(i) == s.end()) {
            complementSet.insert(i);
        }
    }
    return complementSet;
}

int main()
{
    
    string line;
    int maxVal = 0;
    vector<set<int>> arrSave(27,set<int>());
    while (getline(cin, line) && line != "---") {
        stringstream ss(line);
        char name, eq, ob, cb;
        ss >> name >> eq >> ob;
        int id = name-'A';
        int num;
        while (ss >> num) {
            arrSave[id].insert(num);
            arrSave['U'-'A'].insert(num);
            maxVal = max(maxVal, num);
            ss >> cb;
        }
    }
    arrSave['U'-'A'] = getComplement(arrSave['U'-'A'],maxVal);
    // printSet(arrSave[0]);
    // printSet(arrSave[1]);
    // printSet(arrSave[2]);

    // return 0;
    string command;
    while(getline(cin,command))
    {
        queue<string> st;
        func(command,st);
        vector<set<int>> arrCopy(arrSave.begin(),arrSave.end());
        
        stack<char> store;
        while(!st.empty())
        {
            // cout<< i <<endl;
            string i = st.front();st.pop();
            // cout << i <<endl;
            if(i == "union")
            {
                int id2 = store.top() - 'A'; store.pop();
                int id1 = store.top() - 'A'; //st.pop();
                arrCopy[id1].insert(arrCopy[id2].begin(),arrCopy[id2].end());
                // st.push(id1+'A');
            }
            else if(i == "intersection")
            {
                int q2 = store.top()- 'A'; store.pop();
                int q1 = store.top()- 'A'; 

                set<int> resultSet;
                set_intersection(arrCopy[q1].begin(), arrCopy[q1].end(), arrCopy[q2].begin(), arrCopy[q2].end(),
                             inserter(resultSet, resultSet.begin()));
                arrCopy[q1] = resultSet;
            }
            else if(i == "complement")
            {
                int q1 = store.top() - 'A';
                arrCopy[q1] = getComplement(arrCopy[q1], maxVal);
            }
            else if(i == "difference")
            {
                int q2 = store.top()- 'A'; store.pop();
                int q1 = store.top()- 'A'; 

                set<int> resultSet;
                set_difference(arrCopy[q1].begin(), arrCopy[q1].end(), arrCopy[q2].begin(), arrCopy[q2].end(),
                            inserter(resultSet, resultSet.begin()));
                arrCopy[q1] = resultSet;
            }
            else if(i == "size")
            {
                int q1 = store.top()- 'A'; store.pop();

                cout << arrCopy[q1].size() <<endl;
                continue;
            }
            else
            {
                store.push(i[0]);
            }
        }
        if(!store.empty())
        {
            int qId = store.top() - 'A';
            printSet(arrCopy[qId]);
        }
        
        // cout <<endl;
        // cout << start << " " <<end << endl;
    }
}