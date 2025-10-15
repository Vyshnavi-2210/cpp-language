#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1; // Base case
    else
        return n * factorial(n - 1); // Recursive case
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
        cout << "Factorial is not defined for negative numbers.";
    else
        cout << "Factorial of " << number << " is " << factorial(number);

    return 0;
}
