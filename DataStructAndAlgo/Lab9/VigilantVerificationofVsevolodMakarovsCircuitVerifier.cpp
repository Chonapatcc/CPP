#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


int main()
{
    int n ; 
    cin>> n; 

    vector<bool> tree;

    for(int i=0 ;i<n ; i++)
    {
        bool temp;
        cin >> temp;
        tree.push_back(temp);
    }
    
    string temp;
    getline(cin,temp);

    string line;
    while(getline(cin,line))
    {
        stringstream ss(line);

        string type;
        int pos1, pos2;
        ss >> type ;

        if(type == "end")
        {
            break;
        }
        
        if(type=="AND")
        {
            ss >> pos1 >> pos2;
            tree.push_back(tree[pos1] & tree[pos2]);
        }
        else if(type=="OR")
        {
            ss >> pos1 >> pos2;
            tree.push_back(tree[pos1] | tree[pos2]);
        }
        else if(type=="NOT")
        {
            ss >> pos1;
            tree.push_back(!tree[pos1]);
        }
        
    
    }

    // for(int i=0; i <tree.size() ;i ++)
    // {
    //     cout << tree[i] <<" ";
    
    // }
    cout << tree[tree.size()-1] <<endl;

}