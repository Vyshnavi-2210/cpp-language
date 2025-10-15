#include <iostream>
using namespace std;

class Grandparent {
public:
    void showGrandparent() {
        cout << "Grandparent class\n";
    }
};

class Parent : public Grandparent {
public:
    void showParent() {
        cout << "Parent class\n";
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "Child class\n";
    }
};

int main() {
    Child obj;
    obj.showGrandparent();
    obj.showParent();
    obj.showChild();
    return 0;
}
