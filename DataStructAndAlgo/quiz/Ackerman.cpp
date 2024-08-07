#include <bits/stdc++.h>
using namespace std;
void printList(list<char> *lst)
{
    for(list<char>::iterator i = lst->begin(); i!=lst->end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
bool isInList(list<char> *lst,char c)
{
    for(list<char>::iterator i = lst->begin(); i!=lst->end(); i++)
    {
        if(*i==c)
        {
            return true;
        }
    }
    return false;
}
void recur(list<char> lst,list<char>myList)
{
    for(list<char>::iterator i = lst.begin(); i!=lst.end(); i++)
    {
        bool found =isInList(&myList,*i);
        if(!found)
        {
            // cout << i << " ";
            list<char>newList(myList);
            newList.push_back(*i);
            recur(lst,newList);
            if(newList.size() == lst.size())
            {
                printList(&newList);
            }
        }
    }
}
list<char> creatList(int start,int stop)
{
    list<char>lst;
    for(int i=start ; i<=stop ; i++)
    {
        lst.push_back((char)i);
    }
    return lst;
}
int main()
{
    int start = 65;
    int stop = 66;

    list<char> lst = creatList(start,stop);
    recur(lst,list<char>());
}

/*
recur(lst.size() = 1 , mylist.size() == 1)
recur(lst.size() = 0 , recur(m,0))
recur()



*/