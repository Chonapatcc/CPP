#include <iostream>
using namespace std;

int main()
{
    int types;
    cin>>types;
    string names[types];
    int evals[types];

    for(int i =0 ; i < types ; i++)
    {
        string name;
        int health , power , defence;
        cin>>name >> health >> power >> defence;
        //Zombie: (HP 125 | 5/12) - EVAL 185
        // hp power/defence
        int eval = health + (power*defence);
        names[i] = name;
        evals[i] = eval;
        cout << name << ": (HP " << health <<" | " << power<<"/" << defence << ") - EVAL " << eval<< endl;
    }
    // sort
    for(int i =0 ; i < types ; i++)
    {
        for(int y = i+1 ; y<types; y++)
        {
            if (evals[i] > evals[y])
            {
                int tempInt  = evals[i];
                evals[i] = evals[y];
                evals[y] = tempInt;
                string tempString = names[i];
                names[i] = names[y];
                names[y]  = tempString;
            } 
        }
    }

    // print lowest 
    //The weakest monster is Goblin with evaluation of 85

    cout << "The weakest monster is " << names[0] <<" with evaluation of " << evals[0] <<endl;
    //The strongest monster is Mimic with evaluation of 753

    cout << "The strongest monster is " << names[types-1] << " with evaluation of " << evals[types-1]<<endl;
}