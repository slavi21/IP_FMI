// Task2: Write a program that takes two natural numbers and returns their greatest common divisor.

#include <iostream>

// Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int n, k;
    std::cout << "Enter two numbers: ";
    std::cin >> n >> k;

    std::cout << "Greatest Common Divisor of " << n << " and " << k << " is: " << gcd(n, k) << endl;

    return 0;
}
