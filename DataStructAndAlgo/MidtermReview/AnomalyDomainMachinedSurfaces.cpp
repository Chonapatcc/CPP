#include <string>
#include <vector>
#include <iostream>
using namespace std;
int countSpace(string line)
{
    int count= 0;
    for(int i=0 ; i < line.length() ;i++)
    {
        if(line[i]== ' ')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int  num;
    while (cin >> num , num)
    {
        vector<int> spaces(num);
        int minSpaces = -1;
        string line;
        char temp = getchar();
        for (int i = 0; i < num; ++i)
        {
            getline(cin, line);
            int spaceCount =countSpace(line);
            // cout << line <<" " <<spaceCount << endl;
            if(spaceCount < minSpaces || minSpaces == -1)
            {
                minSpaces = spaceCount;
            }
            spaces[i] = spaceCount;
        }
        int total = 0;
        for (int i = 0; i < num; i++)
        {
            total += spaces[i] - minSpaces;
        }
        cout << total << '\n';
    }
}