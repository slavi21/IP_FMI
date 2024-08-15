// Task 4: Write a program that accepts a natural number and prints its prime factorization, sorted in descending order.

// Input: 50 
// Output: 5^2 2^1

#include <iostream>
#include <cmath>

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

	for (int i = n; i > 1; i--)
	{
    	//check if i is prime
		bool isPrime = true;
		double temp = sqrt(i);
		for (int k = 2; k <= temp; k++)
		{
			if (i % k == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (!isPrime)
			continue; //we don't need this number

            //The continue statement in C++ is used inside loops to skip the current iteration 
            //of the loop and move directly to the next iteration. 
            //This happens without executing any more of the code inside the loop for the current iteration.

		//check how many time i devides n
		int count = 0;
		while (n % i == 0)
		{
			count++;
			n /= i;
		}

		 if (count > 0) {
            std::cout << i << "^" << count << " ";
        }
	}
}
