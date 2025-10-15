#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class\n";
    }
};

class Derived1 : public Base {
public:
    void showDerived1() {
        cout << "Derived1 class\n";
    }
};

class Derived2 : public Base {
public:
    void showDerived2() {
        cout << "Derived2 class\n";
    }
};

int main() {
    Derived1 obj1;
    Derived2 obj2;
    obj1.showBase();
    obj1.showDerived1();
    obj2.showBase();
    obj2.showDerived2();
    return 0;
}
