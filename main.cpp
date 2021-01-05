#include "lion.h"
#include "herbivore.h"

int main()
{
    Animals* mas[3];
    mas[0] = new herbivore();
    mas[1] = new Predator();
    mas[2] = new lion();

    for (int i = 0; i < 3; i++) {
        mas[i]->input();
        mas[i]->out();
        cout << endl;
    }
    for (int i = 0; i < 3; i++) {
        delete mas[i];
    }

    return 0;
}