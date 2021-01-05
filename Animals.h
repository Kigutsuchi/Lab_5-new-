#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animals
{
protected:
    string name;
public:
    Animals() :name(">_empty") {}
    Animals(string _name) :name(_name) {}
    virtual ~Animals() {};

    virtual void input() = 0;
    virtual void out() = 0;
};

void Input(string& str);
int Input();
int Input(int q);

