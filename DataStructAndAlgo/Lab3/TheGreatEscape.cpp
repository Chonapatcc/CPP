#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *prev=NULL;
    Node *next=NULL;
};
Node * getInput()
{
    int inputNum;
    Node *head = NULL;
    Node *node = head;

    while(1)
    {
        cin>>inputNum;
        if(inputNum==0)
        {
            break;
        }
        Node *newNode = new Node;
        newNode->val = inputNum;
        if(node==NULL)
        {
            head = newNode;
            node = head;
        }
        else
        {
            node->prev = newNode;
            newNode->next = node;
            node = node->prev;
        }
    }
    return node;
}

void printNode(Node *input)
{
    if(input!=NULL)
    {
        while(1)
        {
            cout << input->val <<" ";
            if(input->next ==NULL)
            {
                cout << endl;
                break;
            }
            input = input->next;
        }
    }
}

Node * isIn(Node *save,int value)
{
    while(1)
    {
        if(save!=NULL)
        {
            if(save->val ==value)
            {
                return save;
            }
        }
        else
        {
            return NULL;
        }
        save = save->next;
    }
}


void addNode(Node *startPos,int value)
{
    Node *newnode = new Node;
    newnode->val = value;

    newnode->prev = startPos;
    if(startPos->next !=NULL)
    {
        startPos->next->prev = newnode;   
    }
    newnode->next = startPos->next;
    startPos->next= newnode;
}
void deleteNode(Node *node)
{
    node->prev->next =
}
int main()
{
    int lines;
    cin>>lines;
    Node *saveInput = getInput();
    for(int i =1 ; i < lines ; i++)
    {
        Node *input = getInput();
        
        if(input == NULL)
        {
            continue;
        }

        Node *startPos = isIn(saveInput,input->val);
        if(startPos)
        {
            while(1)
            {
                input = input->next;
                if(input==NULL)
                {
                    break;
                }
                Node *checker = isIn(saveInput,input->val);
                if(checker)
                {

                }
                // if(!checker)
                // {
                //     addNode(startPos,input->val);
                // }
            }
            
        }
        printNode(saveInput);
    }
    
}