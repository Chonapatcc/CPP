#include <bits/stdc++.h>
using namespace std;
void printList(list<int> lst)
{
    list<int>::iterator it;
    for(it = lst.begin() ; it!=lst.end();it++)
    {
        cout << *it << " ";
    }
    cout <<endl;
}
int main()
{
    
    while(1)
    {
        list<int> spaceLst;
        list<int> leftLst;
        list<int> rightLst;
        int size ;
        cin >>size;
        char temp = getchar();
        if(size==0)
        {
            break;
        }

        for(int i= 0 ; i <size ;i ++)
        {
            string left;
            string right;

            string line;
            getline(cin,line);
            stringstream s(line);
            s>>left;
            s>>right;
            int lleft = left.length(),lright = right.length();
            int space = 25-lleft - lright;
            spaceLst.push_back(space);
            leftLst.push_back(lleft);
            rightLst.push_back(lright);
        }
        printList(spaceLst);
        printList(leftLst);
        printList(rightLst);
        int maxSpace = *max_element(spaceLst.begin(),spaceLst.end() );

    }

    

}