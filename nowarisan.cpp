#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan() {
        cout << "Hello saya dari function dari base class";
    }
};

class derivedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya dari function dari derived class";
    }
};

int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}