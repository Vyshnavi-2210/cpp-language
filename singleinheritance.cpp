#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "This is the Base class.\n";
    }
};

class Derived : public Base {
public:
    void showDerived() {
        cout << "This is the Derived class.\n";
    }
};

int main() {
    Derived obj;
    obj.showBase();
    obj.showDerived();
    return 0;
}
