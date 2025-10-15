#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B inherits A\n";
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C inherits A\n";
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D inherits B and C\n";
    }
};

int main() {
    D obj;
    // obj.showA(); // Ambiguity: showA() exists in both B and C
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}
