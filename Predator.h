#pragma once
#include "Animals.h"
class Predator :
   virtual public Animals
{
protected:
    int life;
    int flock;
public:
    Predator() :life(0), flock(0) {};
    Predator(string _name, int _life, int _flock) :life(_life), flock(_flock), Animals(_name) {}
    ~Predator() {};

    void input() {
        cout << "Input habitat:" << endl;
        Input(name);
        cout << "Input life:" << endl;
        life = Input(0);
        cout << "Input num in flock:" << endl;
        flock = Input(0);
    }
    void out() {
        cout << "\nName: " << name << endl;
        cout << "Life: " << life << endl;
        cout << "Num in flock: " << flock << endl;
    }
};

