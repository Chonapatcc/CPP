#include <bits/stdc++.h>
using namespace std;

class Node
{
public :
    int data;
    Node* left;
    Node* right;
};

Node *head ;
void addChild(int child)
{

    Node *node = head;

    Node *newNode  = new Node();
    newNode->data = child;
    while(true)
    {  
        if(child<node->data)
        {
            if(node->left == nullptr)
            {

                node->left = newNode;
                break;
            }
            else
            {
                node = node->left;
            }
        }
        else 
        {
            if(node->right == nullptr)
            {
                node->right = newNode;
                break;
            }
            else
            {
                node = node->right;
            }
        }

    }
    
}



int findMax(Node *node )
{
    while(node->right!=nullptr)
    {
        node = node->right;
    }
    return node->data;
}


































//11
      































int findPredecessor(Node *node)
{
    int predecessor = findMax(node->left);
    return predecessor;
}









int main()
{
    head = new Node();

    vector<int> nodes = {70,11,47,81,20,61,10,12,13,62};
    head->data = 70;


    for(int i =1 ; i<nodes.size(); i++)
    {
        addChild(nodes[i]);
    }

    cout << findPredecessor(head) <<endl;


    
}