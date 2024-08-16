#include <bits/stdc++.h>
using namespace std;
class Player
{
public:
    string name;
    double hp,atk,def,maxEnergy,energy;
    double dmgMulti,defMulti,statusTime;

    int finalATK,finalDEF;
};
double setValue(double val)
{
    val = max(val,0.25);
    val = min(val,3.0);
    return val;
}
void getInput(Player *p)
{
    cin>>p->name>>p->hp>>p->atk>>p->def>>p->maxEnergy>>p->dmgMulti>>p->defMulti>>p->statusTime;
    p->energy = 0;
    p->dmgMulti = setValue(p->dmgMulti);
    p->defMulti = setValue(p->defMulti);
    p->statusTime = min(p->statusTime,5.0);
}
void setStatus(Player *p)
{
    p->finalATK = p->atk;
    p->finalDEF = p->def;
    if(p->statusTime>0)
    {
        p->finalATK = p->atk*p->dmgMulti;
        p->finalDEF = p->def*p->defMulti;
    }
}
void fight(Player *p1,Player *p2)
{
    setStatus(p1);
    setStatus(p2);
    p1->statusTime -=1;
    if(p1->energy == p1->maxEnergy)
    {
        p1->finalATK*=2;
        p1->energy = 0;
    }
    else
    {
        p1->energy +=1;
    }
    int dmg = pow(p1->finalATK,2) /p2->finalDEF;
    
    p2->hp -= dmg;
    // cout << p1->name << " attack " <<endl;
    // cout << dmg << endl;
    // cout << "enegy " << p1->energy <<  " max energy" << p1->maxEnergy <<endl;
    // cout << "hp 1 " << p1->hp <<endl;
    // cout << "hp 2 " << p2->hp <<endl;
    // cout << p1->name << " atk  = " <<p1->finalATK <<endl;
    // cout << p2->name << " atk  = " <<p2->finalATK <<endl;

}
int main()
{
    Player p1 = Player();
    Player p2 = Player();
    getInput(&p1);
    getInput(&p2);
    int turn =0 ;
    while(p1.hp>0 and p2.hp>0)
    {
        fight(&p1,&p2);
        turn++;
        if(p2.hp<=0)
        {
            break;
        }
        fight(&p2,&p1);
        turn++;
    }

    if(p1.hp>0)
    {
        cout << p1.name << " is victorious"<<endl;
    }
    else
    {
        cout << p2.name << " is victorious"<<endl;
    }
    cout << "The battle took "<<turn <<" turn";
    if(turn>0)
    {
        cout << "(s)";
    }

}