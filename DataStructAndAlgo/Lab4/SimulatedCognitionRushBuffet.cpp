#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int rush;
    string name;
    Node *next;
    Node(int rush,string name)
    {
        this->rush = rush;
        this->name = name;
        this->next = NULL;
    }
};

void insertNode(Node *head,  Node *newNode)
{

    while(1)
    {
        if(head->next ==NULL)
        {
            head->next = newNode;
            break;
        }
        
        if(newNode->rush > head->next->rush)
        {
            newNode->next = head->next;
            head->next = newNode;
            break;
        }
        
        head = head->next;
    }
}

void printNode(Node *head, int times)
{
    while(1)
    {
        if(head==NULL or times<=0)
        {
            break;
        }
        cout << head->name << endl;
        head = head->next;
        times--;
    }
}
int main()
{
    int num,spaces;
    cin>>num>>spaces;

    Node *head = NULL;

    for(int i =0 ; i< num ; i++)
    {
        int rush;
        string name;
        cin>>rush>>name;
        Node *newP = new Node(rush,name);
        
        if(head == NULL)
        {
            head = newP;
 
        }
        else if(newP->rush > head->rush)
        {
            newP->next = head;
            head = newP;
        }
        else
        {
            insertNode(head,newP);
        }
    }

    // printNode(head,num);

    printNode(head,spaces);

}