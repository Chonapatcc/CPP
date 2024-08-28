#include <bits/stdc++.h>
using namespace std;
set<int> getComplement(const set<int>& s, int maxVal) {
    set<int> complementSet;
    for (int i = 0; i <= maxVal; ++i) {
        if (s.find(i) == s.end()) {
            complementSet.insert(i);
        }
    }
    return complementSet;
}
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
void printQueue(queue<string> queue) 
{
    while (!queue.empty()) 
    {
        cout << queue.front() << " ";
        queue.pop();
    }
    cout << endl;
}

void recur(string t,queue<string> &st)
{
    int OB = t.find('(');
    if(OB!=-1)
    {
        string line = t.substr(0,OB);
        string newT = t.substr(OB+1,t.length() - OB-2);
        int find1 = newT.find(',');
        int find2 = newT.find('(');
        if(find1!=-1 and find2!=-1 and find1>find2)
        {
            recur(newT,st);
        }
        else
        {
            stringstream s(newT);
            string temp;
            while(s>>temp)
            {
                int ch = temp.find(',') ;
                int ch2 = temp.find('(');
                if(ch==1 and !(ch2==1) and ch>ch2 )
                {
                    temp = temp.substr(0,ch);
                }
                recur(temp,st);
            }
        }
        st.push(line);
        // cout << line <<endl;
        // cout << newT <<endl;
        return;
    }
    else
    {
        st.push(t);
        return ;
    }
}

void unionSet(set<int> *arr, int id1 ,int id2)
{
    for(auto it = arr[id2].begin(); it!=arr[id2].end();it++)
    {
        arr[id1].insert(*it);
    }
}

int isCommand(string t)
{
    int x = t=="union" or t=="intersection" 
    or t=="complement" or t=="difference" or t=="size" ;
    return x;
}

void translate(queue<string> q , set<int> *arr,int maxVal)
{
    stack <string> st ;
    string last = "";
    while(!q.empty())
    {
        string t = q.front();
        if(isCommand(t))
        {
            if(t=="union")
            {
                string q2 = st.top(); st.pop();
                string q1 = st.top();
                set<int> A = arr[q1[0]-'A'];
                set<int> B = arr[q2[0]-'A'];
                set<int> resultSet = A; 
                resultSet.insert(B.begin(), B.end());
                arr[q1[0]-'A'] = resultSet;

            }
            else if(t=="intersection")
            {
                string q2 = st.top(); st.pop();
                string q1 = st.top();
                set<int> A = arr[q1[0]-'A'];
                set<int> B = arr[q2[0]-'A'];
                set<int> resultSet;
                set_intersection(A.begin(), A.end(), B.begin(), B.end(),
                             inserter(resultSet, resultSet.begin()));
                arr[q1[0]-'A'] = resultSet;
            }
            else if(t=="complement")
            {
                string q1 = st.top();
                set<int> A = arr[q1[0]-'A'];
                set<int> resultSet = getComplement(A, maxVal);
                arr[q1[0]-'A'] = resultSet;
            }
            else if(t=="difference")
            {
                string q2 = st.top(); st.pop();
                string q1 = st.top();
                set<int> A = arr[q1[0]-'A'];
                set<int> B = arr[q2[0]-'A'];
                set<int> resultSet;
                set_difference(B.begin(), B.end(), A.begin(), A.end(),
                            inserter(resultSet, resultSet.begin()));
                arr[q1[0]-'A'] = resultSet;
            }
            else if(t=="size")
            {
                string q1 = st.top();
                set<int> A = arr[q1[0]-'A'];
                set<int> resultSet = A;
                cout << resultSet.size();
                cout << endl;
                return ;
            }
            last = t;
        }
        else
        {
            st.push(t);
        }
        // cout << t << endl;
        q.pop();
    }
    string lText = st.top();
    printSet(arr[lText[0] - 'A']);
}
int main() 
{
    set<int> arrSave[3];
    string line;
    int maxVal = 0;
    while (getline(cin, line) && line != "---") {
        stringstream ss(line);
        char name, eq, ob, cb;
        ss >> name >> eq >> ob;
        int id = name-'A';
        int num;
        while (ss >> num) {
            arrSave[id].insert(num);
            maxVal = max(maxVal, num);
            ss >> cb;
        }
    }
    // printSet(arrSave[0]);
    // printSet(arrSave[1]);
    // printSet(arrSave[2]);
    while (getline(cin, line)) 
    {
        queue<string> q;

        recur(line,q);
        // printQueue(q);
        set<int> *arr = new set<int>[3];
        for(int i=0 ; i<3 ; i++)
        {
            arr[i] = arrSave[i];
        }
        translate(q,arr,maxVal);
    }


    return 0;
}