#include <iostream>
using namespace std;

class Player
{
public:
    Player *left,*right;
    int num;
    int ch;
    
    Player(int num) 
    {
        this->num = num; 
        this->left = NULL;
        this->right = NULL; 
        this->ch = 1;
    } 
};

void printP(Player *p)
{
    Player *save = p;
    cout << p->num << "->" ; 
    while(1)
    {
        p = p->right;
        if(p == save)
        {
            cout <<endl;
            break;
        }
        cout << p->num << "->" ; 

    }
}

Player *isIn(Player *p,int index)
{
    Player *start = p; 
    if(p->num == index )
    {
        return p;
    }
    while(1)
    {
        p =p->right;
        if(p == start)
        {
            return NULL;
        }
        if(p->num == index)
        {
            return p;
        }
    }
}

void linkP(Player *p1,Player *p2)
{
    //font,back
    p1->right = p2;
    p2->left = p1;
}

void insertPFont(Player *p1,Player *p2)
{
    Player *p3 = p1->left;

    linkP(p2,p1);
    linkP(p3,p2);
}

void insertPBack(Player *p1,Player *p2)
{
    Player *p3 = p1->right;

    linkP(p1,p2);
    linkP(p2,p3);
}

Player *getPlayer(int players)
{
    Player *head= NULL;
    for(int i=0 ; i<players ; i++)
    {
        int left,center = i,right;
        cin>>left>>right;
        if(head == NULL)
        {
            Player *p1 = new Player(left);
            Player *p2 = new Player(center);
            Player *p3 = new Player(right);

            linkP(p1,p2);
            linkP(p2,p3);
            linkP(p3,p1);
            head = p1;
        }
        else
        {
            Player *p1 = isIn(head,left);
            Player *p2 = isIn(head,center);
            Player *p3 = isIn(head,right);

            if(!p2)
            {
                p2 = new Player(center);
                if(p1)
                {
                    insertPBack(p1,p2);
                }
                else if(p3)
                {
                    insertPFont(p3,p2);
                }
                else
                {
                    insertPFont(head,p2);
                }
            }
            if(!p1)
            {
                if(p2)
                {
                    p1 = new Player(left);
                    insertPFont(p2,p1);
                }
            }
            if(!p3)
            {
                if(p2)
                {
                    p3 = new Player(right);
                    insertPBack(p2,p3);
                }
            }

            // if(!p1 and !p2 and !p3)
            // {
            //     Player *p1 = new Player(left);
            //     Player *p2 = new Player(center);
            //     Player *p3 = new Player(right);

            //     linkP(p1,p2);
            //     linkP(p2,p3);
            //     linkP(p3,p1);
            // can do if you give left , right = 1 =1 that is their true left and right
            // }
        }
    }
    return head;
}

Player *getSurvivor(int survivors)
{
    Player *start = NULL;
    Player *surv = NULL;
    for(int i=0 ; i<survivors; i++)
    {
        int surNum;
        cin>>surNum;
        if(surv == NULL)
        {
            surv = new Player(surNum);
            start =surv;
            linkP(surv,surv);
        }
        else
        {
            if(!isIn(start,surNum))
            {
                Player *newP = new Player(surNum);
                insertPBack(surv,newP);
                surv = surv->right;
            }
        }
    }
    return start;
}

void resetChecker(Player *p)
{
    Player *saveP = p;
    p->ch = 1;
    while(1)
    {
        p = p->right;
        if(saveP == p)
        {
            break;
        }
        p->ch = 1;
    }
}

Player *toNext(Player *p)
{
    while(1)
    {
        if(p->ch ==1 )
        {
            return p;
        }
        p = p->left;
    }
}

Player* loopP(Player *p,int loops)
{
    for(int i=0; i<loops ; i++)
    {
        p = p->left;
        p = toNext(p);
    }
    return p;
}

int main()
{
    int players,survivors;
    cin>>players>>survivors;
    Player *player = getPlayer(players);
    Player *surv = getSurvivor(survivors);
    
    // printP(player);
    // printP(surv);
    
    int startPos;
    cin>>startPos;

    // cout << startPos <<endl;
    int time = players - survivors;
    
    if(time<=0)
    {
        time =1;
    }

    int counter = 0 ;
    
    for(int i =0 ; i<= 1000 ; i++)
    {
        resetChecker(player);
        player = isIn(player,startPos);
        int ch =1;
        for(int y =0 ; y< time ;y++ )
        {
            int loop = i%(players-y);
            player = loopP(player,loop);
            if(isIn(surv,player->num))
            {
                ch =0 ;
                break;
            }
            player->ch = 0;
            player = player->left; //just move to left;
            player = toNext(player); //to next checker == 1;
        }
        if(ch)
        {
            counter++;
            cout << i <<endl;
        }
    }
    if(!counter)
    {
        cout << "NOT POSSIBLE"<<endl;
    }
}