#include <bits/stdc++.h>

class Node
{
public:
    Node *next;
    int value;
    Node(int value)
    {
        this->value = value;
    }
};

class Header
{
public:
    Node *last;
    Node *next;
    int length;
};

int main()
{
    // Node *head = NULL;
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    node1->next = node2;
    node2->next = NULL;

    Header *head = new Header();

    head->last = node2;
    head->next = node1;


}



