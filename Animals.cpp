#include "Animals.h"

void Input(string& str) {
    while (true) {
        rewind(stdin);
        cout << "Input string" << endl;
        getline(cin, str);
        if (str.length() < 2) {
            cout << "\nPlease, describe this topic in more details" << endl;
            continue;
        }
        else break;
    }
}

int Input() {
    int i;
    bool fail = true;
    cout << "\nInput:";
    do
    {
        cin >> i;
        if (cin.fail() || cin.rdbuf()->in_avail() > 1)
            cout << "\nError" << endl;
        else
            if (i > 0)
                fail = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (fail);
    return i;
}

int Input(int q) {
    int i;
    bool fail = true;
    cout << "\nInput:";
    do
    {
        cin >> i;
        if (cin.fail() || cin.rdbuf()->in_avail() > 1)
            cout << "\nError" << endl;
        else
            if (i > 0)
                fail = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (fail);
    return i;
}