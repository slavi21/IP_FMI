// Task 5: Write a program that accepts a natural number and prints its prime factorization, sorted in increasing order.

#include <iostream>
#include <cmath>


int main()
{
	int n;
	std::cin >> n;

	for (int i = 2; i <= n; i++)
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
