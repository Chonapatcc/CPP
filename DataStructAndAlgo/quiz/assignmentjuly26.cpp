#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *left,*right;
    int data;
};

Node *newNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main()
{
    Node *first = newNode(3);
    Node *second =newNode(5);

    first->right =second;
    second->left = first;

    cout << first->data << endl;
    cout << first->right->data <<endl;

    cout << second->data <<endl;
    cout << second->left->data <<endl;
}