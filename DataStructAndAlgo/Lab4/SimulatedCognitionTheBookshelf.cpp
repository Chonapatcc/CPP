#include <iostream>
using namespace std;
class Book
{
public:
    int size;
    string *ref;
    Book(int size)
    {
        this->size = size;
        getInput();

    }

    void getInput()
    {
        string *name = new string[size];
        for(int i =0 ; i< size;i++)
        {
            cin >>name[i];
        }

        ref = name;
    }

    void printName()
    {
        for(int i =0 ; i<size; i++)
        {
            if(i==0)
            {
                cout << ref[i];
            }
            else
            {
                cout << " " <<ref[i];
            }
            
        }
        cout << endl;
    }

};
int main()
{
    int push ,pop;
    cin >>push >>pop;

    Book *head[push];
    for(int i=0 ; i< push;i++)
    {
        int size;
        cin>>size;
        Book *newBook = new Book(size);
        
        head[i] = newBook;

    }

    // for(int i =0 ; i<push ; i++)
    // {
    //     head[i]->printName();
    // }

    int total=0;
    for(int i=0 ; i<pop; i ++)
    {

        int dif = push - i-1 ;
        if(dif<0)
        {
            break;
        }

        total +=  head[dif]->size;
    }

    cout << total <<endl;
    for(int i =0 ; i<pop ; i ++)
    {
        int dif = push - i-1 ;
        if(dif<0)
        {
            break;
        }

        head[dif]->printName();
    }
}