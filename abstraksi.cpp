#include <iostream>
using namespace std;

class abstraksi {
    private: string x, y;

    public: 
    void setXY(string a, string b) {
        x = a;
        y = b;
    }
    void display() {
            cout << "x = " << x << endl;
            cout << "y ="  << y << endl;
        }
};
int main(){
    abstraksiklas ak;
    ak.setXY("yogyakarta","kampus");
    ak.display();

    return 0;
}