#pragma once
#include "Animals.h"
class herbivore :
   virtual public Animals
{
protected:
    int prt;
    int num;
public:
    herbivore() :prt(0), num(0) {};
    herbivore(string _name, int _num, int _prt) : num(_num), prt(_prt), Animals(_name) {}
    ~herbivore() {};

    void input() {
        cout << "Input habitat:" << endl;
        Input(name);
        cout << "Input num of individuals:" << endl;
        num = Input(0);
        cout << "Input num of flocks:" << endl;
        prt = Input();
    }
    void out() {
        cout << "\nHabitat: " << name << endl;
        cout << "Numbers of individuals: " << num << endl;
        cout << "Amount of flocks: " << prt << endl;
    }
};

