#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student s = {"Alice", 20};
    cout << s.name << " is " << s.age << " years old.\n";
    return 0;
}
