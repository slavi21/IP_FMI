// Task 1: Write a program that accepts two natural numbers and returns the least common multiple (LCM).

#include <iostream>

int main()
{
	unsigned int n, k;
	std::cin >> n >> k;

	unsigned max = n > k ? n : k;
	unsigned lcmCandidate = max;
	while (lcmCandidate % n != 0 || lcmCandidate % k != 0)
	{
		lcmCandidate += max;
	}

	std::cout << lcmCandidate << endl;

    return 0;
}
