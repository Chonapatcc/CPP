#include <iostream>
using namespace std;

class Node
{
public:
    int num;
    Node *next;
    Node(int num)
    {
        this->num = num;
        this->next = NULL;
    }
};

void printNode(Node *node)
{
    int ch = 0;
    while(node)
    {
        if(ch)
        {
            cout << " ";
        }
        else
        {
            ch =1 ;
        }
        cout << node->num;
        node = node->next;
    }
}

int isNotIn(Node *node,int find)
{
    while(1)
    {
        if(node == NULL)
        {
            break;
        }
        if(node->num == find)
        {
            return 0;
        }
        node = node->next;
    }
    return 1;
}

int main()
{
    int num ;
    Node *head = NULL;
    Node *node = head;
    while(1)
    {
        cin>>num;
        if(num==0)
        {
            break;
        }

        if(head == NULL)
        {
            head = new Node(num);
            node = head;
        }
        else
        {
            if(isNotIn(head,num))
            {
                Node *newNode = new Node(num);
                node->next = newNode;
                node = node->next;
            }
        }
    }
    printNode(head);
}