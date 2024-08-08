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
void towerOfHanoi(int n, char rod1, char rod2,
                  char rod3,int *times,
                  list<char> *rod1List,list<char> *rod2List,list<char> *rod3List)
{
    if (n == 0) {
        (*times)++;
        return;
    }
    rod1List->push_front(char(n+48));
    printList(rod1List);
    towerOfHanoi(n - 1, rod1, rod3, rod2,times,rod1List,rod3List,rod2List);

    cout << "Move disk " << n << " from rod " << rod1
         << " to rod " << rod2 << endl;
    char val1 = rod1List->front();
    rod1List->pop_front();
    rod2List->push_front(val1);
    cout << "rod1 = ";
    printList(rod1List);
    cout << "rod2 = ";
    printList(rod2List);
    cout << "rod3 = ";
    printList(rod3List);

    towerOfHanoi(n - 1, rod3, rod2, rod1,times,rod3List,rod2List,rod1List);
}

// Driver code
int main()
{
    int N = 5;
    int times = -1;
    list<char>rod1;
    list<char>rod2;
    list<char>rod3;

    towerOfHanoi(N, 'A', 'C', 'B',&times,&rod1,&rod2,&rod3);
    cout << times;
    
    return 0;

}