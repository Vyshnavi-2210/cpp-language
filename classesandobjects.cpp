#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    void display() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car c;
    c.brand = "Toyota";
    c.display();
    return 0;
}
