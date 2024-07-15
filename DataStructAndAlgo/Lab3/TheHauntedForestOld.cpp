#include <iostream>
using namespace std;
class Player
{
public:
    int index;
    Player *left;
    Player *right;
    int checker;
};

Player *createPlayer()
{
    Player *newPlayer = new Player();
    
    newPlayer->index = -1;
    newPlayer->left = NULL;
    newPlayer->right = NULL;
    newPlayer->checker = 0 ;


    return newPlayer;
}

Player *createPlayers(int num)
{
    Player *head = NULL;
    Player *p=head;
    if(num==0)
    {
        return NULL;
    }
    for(int i =0 ; i < num ;i++)
    {
        Player *newPlayer = createPlayer();
        if(head==NULL)
        {
            head= newPlayer;
            p = head;
        }
        else
        {
            p->right = newPlayer;
            newPlayer->left = p;
            p = p->right;
        }
    }
    p->right = head;
    head->left = p;
    return head;
}

Player *isIn(Player *p,int index)
{
    Player *saveStart = p; 
    if(p->index == index)
    {
        return p;
    }
    while(1)
    {
        p =p->right;
        if(p==saveStart)
        {
            return NULL;
        }
        if(p->index==index)
        {
            return p;
        }
    }
}

void printP(Player *p)
{
    Player *saveID = p;
    while(1)
    {
        cout << p->index <<"," <<p->checker << " ";
        p = p->right;
        if(p == saveID)
        {
            cout <<endl;
            break;
        }
    }
}

void addIndex(Player *pList, int index)
{
    while(1)
    {
        if(pList->index==-1)
        {
            pList->index = index;
            break;
        }
        pList = pList->right;
    }
}

void insertIndex(Player *pos, int index)
{
    //add from back
    int temp;

    while(1)
    {
        pos = pos->right;

        temp = pos->index;
        pos->index = index;
        index = temp;
    
        if(pos->index==-1)
        {
            pos->index = index;
            break;
        }  
    }
}

void resetChecker(Player *p)
{
    Player *saveP = p;
    p->checker = 1;
    while(1)
    {
        p = p->right;
        if(saveP == p)
        {
            break;
        }
        p->checker = 1;
    }
}

Player *toNext(Player *p)
{
    while(1)
    {
        if(p->checker ==1 )
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
    int yusha, survivor;
    cin >> yusha >> survivor;
    if(yusha<survivor or yusha>1000 or yusha<3 or survivor<1)
    {
        cout << "NOT POSSIBLE";
        return 0;
    }

    Player *pList = createPlayers(yusha);
    Player *survList = createPlayers(survivor);
    
    int yushaCount = 0;
    for(int i =0 ; i<yusha;i++)
    {
        int pLeft , pCenter, pRight;
        cin>>pLeft >> pRight;
        // if(pLeft>=yusha or pLeft<0 or pRight>=yusha or pRight<0)
        // {
        //     cout << "NOT POSSIBLE";
        //     return 0;
        // }
        pCenter = i ;
        
        Player *posLeft = isIn(pList,pLeft);
        Player *posCenter = isIn(pList,pCenter);
        Player *posRight = isIn(pList,pRight);
        // if(!posLeft and !posCenter and !posRight)
        // {
        //     addIndex(pList,pLeft);
        //     addIndex(pList,pCenter);
        //     addIndex(pList,pRight);
        // }
        if(pLeft>=0 and pLeft<yusha)
        {
            if(!posLeft)
            {
                if(posCenter)
                {
                    insertIndex(posCenter->left,pLeft);
                }
                else if(posRight)
                {
                    insertIndex(posRight->left,pLeft);
                }
                else
                {
                    addIndex(pList,pLeft);
                }
                yushaCount++;
            }
        }
        if(pCenter>=0 and pCenter<yusha)
        {
            if(!posCenter)
            {
                if(posLeft)
                {
                    insertIndex(posLeft,pCenter);
                }
                else if(posRight)
                {
                    insertIndex(posRight->left,pCenter);
                }
                else
                {
                    addIndex(pList,pCenter);
                }
                yushaCount++;
            }
        }
        if(pRight>=0 and pRight<yusha)
        {
            if(!posRight)
            {
                if(posCenter)
                {
                    insertIndex(posCenter,pRight);
                }
                else if(posLeft)
                {
                    insertIndex(posLeft->left,pRight);
                }
                else
                {
                    addIndex(pList,pRight);
                }
                yushaCount++;
            }
        }

        
        // else
        // {
        //     if(posLeft)
        //     {
        //         if(!posCenter)
        //         {
        //             insertIndex(posLeft,pCenter);
        //         }
        //         if(!posRight)
        //         {
        //             insertIndex(posLeft->right,pRight);
        //         }
        //     }
        //     else if(posCenter)
        //     {
        //         if(!posLeft)
        //         {
        //             insertIndex(posCenter->left,pLeft);
        //         }
        //         if(!posRight)
        //         {
        //             insertIndex(posCenter, pRight);
        //         }
        //     }
        //     else if(posRight)
        //     {
        //         if(!posCenter)
        //         {
        //             insertIndex(posRight->left, pCenter);
        //         }
        //         if(!posLeft)
        //         {
        //             insertIndex(posRight->left->left,pLeft);
        //         }
        //     }
        // }
    }
    int survCount = 0 ;
    for(int i =0 ;i<survivor;i++)
    {
        int num;
        cin>>num;
 
        if(!isIn(survList,num) and num>=0 and num <yusha)
        {
            addIndex(survList,num);
            survCount ++;
        }
    }

    int startPos ;
    cin>>startPos;
    if(startPos>=yusha or startPos<0)
    {
        cout << "NOT POSSIBLE";
        return 0;
    }

    int times = yusha - survCount; 
    int counter =0;
    if(times<=0)
    {
        times = 1;
    }
    for(int i =0 ;i<=1000;i++)
    {
        resetChecker(pList);
        pList = isIn(pList,startPos); //to start pos
        int ch =1 ; //print if ch ==1;
        for(int y =0 ;y<times;y++)
        {
            int loops = i%(yusha-y);
            pList = loopP(pList,loops); // move to left side loops times;
            if(isIn(survList,pList->index))
            {
                ch =0 ;
                break;
            }
            pList->checker = 0;
            pList = pList->left; //just move to left;
            pList = toNext(pList); //to next checker == 1;
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