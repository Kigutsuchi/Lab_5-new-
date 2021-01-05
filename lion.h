#pragma once

#include "Predator.h"

class lion: public Predator
{
protected:
    int num;
public:
    lion() :num(0) {};
    lion(string _name, int _life, int _flock, int _num) : num(_num), Predator(_name, _life, _flock), Animals(_name) {}
    ~lion() {};

    void input() {
        cout << "Input habitat:" << endl;
        Input(name);
        cout << "Input life:" << endl;
        life = Input(0);
        cout << "Input num in flock:" << endl;
        flock = Input(0);
        cout << "Input amount:" << endl;
        num = Input();
    }
    void out() {
        cout << "\nName: " << name << endl;
        cout << "Price: " << life << endl;
        cout << "Weight: " << flock << endl;
        cout << "Amount:" << num << endl;
    }
};

