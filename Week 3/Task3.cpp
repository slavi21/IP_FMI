// Task 3: Write a program that takes a natural number and returns whether the number is prime.

// Entrance: 17, Exit: Prime

// Input: 25, Output: not prime

#include <iostream>

bool isPrime(int n){
    bool isPrime = 1;

    if(n <= 1){
        return 0;
    }

    for(int i = 2; i <= n / 2; ++i){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    unsigned n;
    std::cout << "Enter number: ";
    std::cin >> n;
    std::cout<< (isPrime(n) ? "number is prime" : "number is not prime");
}