#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next ;
    struct node *prev;
};
int main()
{
    struct node *head = NULL;
    struct node *list = NULL;
    struct node *tail = NULL;
    for(int i =0 ; i<10 ; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node -> data = i ; 
        new_node -> next = NULL;
        if(head==NULL)
        {
            list = new_node;
            list->prev=NULL;
            head = list;
        }
        else
        {
            list ->next = new_node;
            list->next->prev = list;
            list = list->next;
            tail = list;
        }
 
    }

    list = head;
    cout <<"start ascending"<<endl;
    while(list->next!=NULL)
    {
        cout <<list->data <<endl;
        list = list->next;
    }
    cout << list->data<<endl;
    cout <<"end ascending"<<endl;
    list = tail;
    cout <<"start descending"<<endl;
    while(list->prev!=NULL)
    {
        cout <<list->data <<endl;
        list = list->prev;
    }
    cout <<"end descending"<<endl;


    head->prev = tail;
    tail->next= head;
    list =head ;
    int count =0 ;
    cout <<"Circular" <<endl;
    while(list->next!=NULL)
    {
        if(count ==100)
        {
            break;
        }
        cout <<list->data << " ";
        list= list->next ;
        count++;
    }

    cout <<"end circular" <<endl;



}