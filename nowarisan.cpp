#include <iostream>

using namespace std;

class baseClass final() {
    public:
    virtual void perkenalan(){
        cout << "saya function dari base class" << endl;
    }
};
class derivedClass : public baseClass {
    public:
    void perkenalan(){
            cout << "saya function dari derived class" << endl;
        }
};

int main(){
    derivedClass a;
    a.perkenalan();

    return 0;
}