#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

class Bird:public Animal
{
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

class Pet
{
protected:
    string name;
public:
    Pet(string);
    string getName();
    void setName(string);
};

class OwnedBird:public Bird ,public Pet
{
public:
    OwnedBird(string, int, int, int);
};

//limitStat implement

void Animal::limitStat()
{
    if(energy > MAX_ENERGY)
    {
        energy = MAX_ENERGY; 
    }
    if(energy<0)
    {
        energy = 0 ;
    }
    if(fullness>MAX_FULLNESS)
    {
        fullness = MAX_FULLNESS;
    }
    if(fullness<0)
    {
        fullness  = 0;
    }
    if(happiness>MAX_HAPPINESS)
    {
        happiness = MAX_HAPPINESS;
    }
    if(happiness<0)
    {
        happiness = 0;
    }
}

//end limitstat implement

// Animal implement

Animal::Animal(int hap,int ener,int full):happiness(hap),energy(ener),fullness(full)
{

    limitStat();
}

int Animal::getHappiness()
{
    limitStat();
    return happiness;

}

int Animal::getEnergy()
{
    limitStat();

    return energy;
 
}

int Animal::getFullness()
{
    limitStat();
    return fullness;
}

void Animal::eat(int food)
{
    if(food>0 )
    {fullness +=food;}
    if(fullness>MAX_FULLNESS)
    {
        happiness -=10;
    }
    limitStat();
    
}

void Animal::play(int hour)
{
    if(hour>0 and energy>0 and fullness>0)
    {
        energy-=10*hour;
        fullness -=20*hour;
        happiness+=5*hour;
    }

   limitStat();
    
    
}

void Animal::sleep(int hour)
{
    if(hour>0)
    {
        energy+=hour*10;

        fullness -= hour*10;
    }

    limitStat();
}

//end Animal implement


// Bird implement

Bird::Bird(int hap, int ener ,int full):Animal(hap,ener,full)
{
    limitStat();
}

void Bird::fly(int hour)
{
    if(hour>0)
    {
        energy-=5*hour;
    }
    limitStat();
}

void Bird::sing()
{
    happiness+=5;
    limitStat();
}

// end Bird implement


// Pet implement

Pet::Pet(string newname):name(newname)
{

}

string Pet::getName()
{
    return name;
}

void Pet::setName(string newname)
{
    name = newname;
}

//end Pet implement

//OwnedBird implement

OwnedBird::OwnedBird(string newname,int hap,int ener,int full):Bird(hap,ener,full),Pet(newname)
{}


int main()
{
    char action;
    int hour;
    int happiness, energy, fullness;
    cin >> happiness >> energy >> fullness;
    OwnedBird animal("Dobby", happiness, energy, fullness);
    while (1) {
        cin >> action;
        if (action == 'q') break;
        cin >> hour;
        switch (action) {
            case 'e':
                animal.eat(hour);
                break;
            case 'p':
                animal.play(hour);
                break;
            case 's':
                animal.sleep(hour);
                break;
            case 'f':
                animal.fly(hour);
                break;
            case 'i':
                for (int i = 0; i < hour; i++)
                    animal.sing();
                break;
            case 'n':
                if (hour < 5)
                    animal.setName("Debby");
                else
                    animal.setName("Shogun");
                break;
        }
    }
}
