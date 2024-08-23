#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void search(vector<string> &nameArr,vector<string> &NOArr,string find)
{
    int size=  nameArr.size();
    for(int i =0 ; i<size; i ++)
    {
        if(nameArr[i] == find )
        {
            cout << NOArr[i] <<endl;
            return;
        }
    }
    cout << "Contact not found." <<endl;
}
int main()
{
    string line;
    vector <string> nameArr;
    vector <string> NOArr;
    while(getline(cin,line) and line !="-------------------------")
    {
        string name;
        string NO;
        stringstream s(line);
        s>>name>>NO;
        nameArr.push_back(name);
        NOArr.push_back(NO);
    }
    while(getline(cin,line))
    {
        search(nameArr,NOArr,line);
    }
}