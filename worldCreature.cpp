#include <stdio.h>
#include <iostream>
using namespace std;

class Hunger {
    public:
        int h;
        void getHunger();
        void setHunger();
};

class Creature: public Hunger {
    float deathChance;
    float reproductionChance;
    public:
        int getHunger(int h) {
            return h;
        }
        void setHunger(int hunger) {
            h = hunger;
        }
        void die();
        void reproduce();
};

class World: public Creature {
    float CreateChance;
    public:

        void createCreature() {
            
        }
};


int main() {
    Creature c;
    c.setHunger(10);
    cout <<"Finished";
    return 0;
}