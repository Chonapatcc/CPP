#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
};

Node *createNewNode(int val)
{
    Node *newNode = new Node;
    newNode->val = val;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

Node * isIn(Node *node , int val)
{
    while(1)
    {
        if(node==NULL)
        {
            break;
        }
        if(node->val ==val)
        {
            return node;
        }

        node =node->next;
    }
    return NULL;
}

Node *getInput(int type)
{
    Node *head = NULL;
    Node *node =head;
    int num ;
    int counter =0 ;
    while(1)
    {
        cin>>num;
        if(num==0)
        {
            break;
        }
        counter++;
        
        if(head==NULL)
        {
            Node *newNode = createNewNode(num);
            head = newNode;
            node = head;
        }
        else
        {

            Node *newNode = createNewNode(num);
            node->prev = newNode;
            newNode->next = node;

            node = node->prev;
            
             
        }
    }
    if(type)
    {
        return node;
    }
    else
    {
        if (counter>=2)
        {
            return node;
        }
        else
        {
            return NULL;
        }
    }
}
void printNode(Node *node)
{
    while(1)
    {
        if(node==NULL)
        {
            cout << endl;
            break;
        }
        cout << node->val <<" ";
        node = node->next;
    }
}
int main()
{
    int times ;
    cin>>times;
    if(times<=0)
    {
        return 0;
    }
    Node *save = getInput(1);
    if(!save)
    {
        return 0;
    }
    // printNode(save);
    for(int i=1 ; i<times ; i++)
    {
        Node *newNode = getInput(0);
        if(newNode)
        {   
            Node *pos =isIn(save, newNode->val);
            if(pos)
            {
                while(1)
                {
                    newNode = newNode->next;

                    if(newNode == NULL)
                    {
                        break;
                    }
                    if(!isIn(save, newNode->val))
                    {

                        Node *tempNode = createNewNode(newNode->val);
                        Node *nextPos = pos->next;

                        pos->next = tempNode;
                        tempNode->prev = pos;

                        if(nextPos)
                        {
                            tempNode->next = nextPos;
                            nextPos->prev = tempNode;
                        }
                        pos = pos->next;
                    }

                }
            }
            
        }
    }
    printNode(save);

}
