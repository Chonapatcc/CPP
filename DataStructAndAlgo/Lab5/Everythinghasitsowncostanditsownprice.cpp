#include <bits/stdc++.h>
using namespace std;

void printList(list<int> lst)
{
    for(list<int>::iterator i = lst.begin(); i != lst.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
}
int main()
{
    string t;
    getline(cin,t);
    stringstream s(t);

    int num;
    list<int> lst;
    while(s>>num)
    {
        lst.push_back(num);
    }
    list<int> saveLst = lst;
    lst.sort();

    int size = lst.size();
    int mid;
    if(size%2==0)
    {
        auto lFront = lst.begin();
        advance(lFront,size/2 -1);
        mid = *lFront;
        advance(lFront,1);
        mid += *lFront;
        mid /= 2 ;
    }
    else
    {
        auto lFront = lst.begin();
        advance(lFront,size/2);
        mid = *lFront;
    }
    // printList(lst);
    // printList(saveLst);
    // cout << mid << endl;
    list<int> *storeLinkedList = new list<int>[mid];
    int sizes[mid] ;
    for(int i=0;i<mid;i++)
    {
        sizes[i] = 0;
    }
    for(list<int>::iterator i = saveLst.begin(); i != saveLst.end(); ++i)
    {
        int address = *i %mid;
        storeLinkedList[address].push_front(*i);
        sizes[address]++;
    }
    int maxSize= -1;
    for(int i= 0 ; i< mid ; i++)
    {
        if(sizes[i]>maxSize or maxSize==-1)
        {
            maxSize = sizes[i];
        }
    }
    for(int i =0 ; i<mid;i++)
    {
        if(sizes[i] == maxSize)
        {
            printList(storeLinkedList[i]);
        }
    }
    
}