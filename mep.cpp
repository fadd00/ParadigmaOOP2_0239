#include<iostream>
using namespace std;

class orang {
    public:
    int umur;

    orang(int pUmur)
    (
        cout << "orang dibuat dengan umur" << umur << "\n" << endl;

    )
};

class pekerja : public orang {
    public: 

    pekerja(int pUmur) : orang(pUmur) {
        cout << "pekerja Dibuat\n" << endl;
    }
};