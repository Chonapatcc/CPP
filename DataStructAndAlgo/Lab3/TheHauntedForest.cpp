#include <iostream>
using namespace std;
class Player
{
public:
    int index;
    Player *left;
    Player *right;
};

Player *createPlayer(int index)
{
    Player *newPlayer = new Player();
    
    newPlayer->index = index;
    newPlayer->left = NULL;
    newPlayer->right = NULL;

    return newPlayer;
}

void linkPlayer(Player *p1,Player *p2)
{
    p1->right = p2;
    p2->left = p1;
}


Player *toStart(Player *p)
{
    int saveIndex ;
    saveIndex = p->index;

    p = p->left;
    while(1)
    {
        if(p->left == NULL)
        {
            break;
        }
        if(p->index == saveIndex)
        {
            p = p->right;
            break;
        }

        p = p->left;
    }
    return p;
}

Player *isIn(Player *p,int index)
{

    while(1)
    {
        if(p->right == NULL)
        {
            return NULL ;
        }
        if(p->index == index)
        {
            return p;
        }

        p = p->right;
    }
}

void printP(Player *p)
{
    int saveIndex ;
    saveIndex = p->index;
    int check = 1;
    while(1)
    {
        if(p->right == NULL)
        {
            cout << p->index << "   end" << endl;

            break;
        }

        if(p->index == saveIndex and !check)
        {
            cout << "   end" <<endl;
        }
        cout << p->index  <<"->";
        p = p->right;
        check =0;
    }
}
int main()
{
    int yusha, survivor;
    cin >> yusha >> survivor;
    if(yusha==survivor)
    {
        cout << "NOT POSSIBLE";
        return 0;
    }

    Player *head = NULL;
    for(int i= 0 ; i < yusha ; i++)
    {
        int left;
        int center = i;
        int right;
        cin>>left >> right;

        if(head==NULL)
        {
            Player *pCenter = createPlayer(center);
            Player *pLeft = createPlayer(left);
            Player *pRight = createPlayer(right);

            linkPlayer(pLeft,pCenter);
            linkPlayer(pCenter,pRight);
            
            head = toStart(pCenter);

            
        }
        else
        {
            Player *posLeft = isIn(head,left);
            Player *posCenter = isIn(head,center);
            Player *posRight = isIn(head,right);

            
        }
        printP(head);
        break;
    }

}