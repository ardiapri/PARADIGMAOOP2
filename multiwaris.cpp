#include <iostream>
using namespace std;

class orang {
public:
    int umur;

    orang(int pumur) :
        umur(pumur)
    {
        cout << "orang di buat dengan umur " << umur << "\n" << endl;
    }
};

class pekerja : vitual public orang {
public:

    pekerja(int pumur) :
       orang(pumur)
    {
        cout << "pekerja dibuat\n" << endl;
    }
};