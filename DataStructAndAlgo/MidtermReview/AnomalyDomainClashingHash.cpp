#include <bits/stdc++.h>
using namespace std;
void printList(list<int> arr)
{
    for(auto i = arr.begin() ; i!=arr.end() ; i++)
    {
        if(*i == -1)
        {
            cout << "-";
        }
        else
        {
            cout << *i;
        }
        cout <<" ";
    }
    cout <<endl;
}
void findFirstOne(list<int> *arr,int val,int pos)
{
    auto it = arr->begin();
    advance(it, pos);
    for(auto i = it ; i!=arr->end() ;i++)
    {
        if((*i) ==-1)
        {
            (*i) = val;
            return;
        }
    }
    for(auto i = arr->begin() ; i!=arr->end() ;i++)
    {
        if((*i) ==-1)
        {
            (*i) = val;
            return;
        }
    }
}
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin>>num;
    int modder = num ;
    while(!isPrime(modder))
    {
        modder++;
    }
    cout << modder << endl;
    list<int> arr(modder,-1);
    for(int i=0 ; i< num ; i++)
    {
        int val;
        cin>>val;
        int pos= val%(modder);
        findFirstOne(&arr,val,pos);
        // cout << pos  << " " << val << endl;
        // printList(arr);
    }
    printList(arr);
    return 0;
}

// 10
// 10 10 10 10 10 10 10 10 10 10