#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin ,a);
    string x;
    for(int i =0 ;i < a.length();i++)
    {
        if(isdigit(a[i]))
        {
            x+=a[i];
        }
    }
    int n=stoi(x);
    int z;
    vector <int>ls={};

    for(int i =0;i<n;i++)
    {
        if(i==0)
        {
            cin >> z;
            ls.push_back(z);
            cout << "ROW 1 : [" <<z<< "]" <<endl;

        }
        else
        {
            cin >> z;
            ls.push_back(z);
            sort(ls.begin(),ls.end());
            cout << "ROW "<<i+1<<" : [" <<ls[0];
            for(int y =1 ;y<i+1;y++)
            {
                cout << ", "<< ls[y];
            }
            cout <<"]"<< endl;
        }
        
        
        

          
    }


}