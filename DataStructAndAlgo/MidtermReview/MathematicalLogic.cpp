#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n]; // 1 true 0 /false
    for(int i= 0; i<n;i++)
    {
        string ch ;
        cin>>ch;
        arr[i] = (ch=="T"?1:0);
    }
    string x ;
    stack <int> st;
    while(cin>>x)
    {
        if(x=="end")
        {
            break;
        }
        if(x == "/\\")
        {
            //and
            int n2 = st.top();
            st.pop();
            int n1 = st.top();
            st.pop();
            st.push(n1&n2);
        }
        else if(x=="\\/")
        {
            //or
            int n2 = st.top();
            st.pop();
            int n1 = st.top();
            st.pop();
            st.push(n1|n2);
        }
        else if(x=="~")
        {
            int x = st.top();
            st.pop();
            x = !x;
            st.push(x);
        }
        else
        {
            int id = x[0]-65;
            st.push( arr[id]) ;
        }
    }
    string tp = st.top()? "T":"F";
    cout << tp << endl;
}