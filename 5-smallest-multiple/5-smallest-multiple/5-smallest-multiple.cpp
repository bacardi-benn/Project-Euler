/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

{5, 2, 3, 3, 2, 2, 7}

10: 2 5
9: 3 3
8: 2 2 2
7: 7
6:
5
4
3
2
1

*/

#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

int main()
{
	int evenly_divisible_by_all_numbers_under = 20;
	std::vector<int> solution_set(evenly_divisible_by_all_numbers_under, 0);
	
	// start searching from the largest number and decrement
	for (int number = evenly_divisible_by_all_numbers_under; number > 1; number--)
	{
		int number_temp = number;
		for (int divisor = 2; divisor <= number; divisor++) // trying to get all the divisors of 'number'
		{
			int divisor_count = 0; // counter for the number of times a unique divisor appears
			while (number_temp % divisor == 0)
			{
				divisor_count++;
				number_temp /= divisor;
			}
			// only add when there is an excess of repeat divsors over the solution set's divisors.
			solution_set[divisor - 1] += std::max(divisor_count - solution_set[divisor - 1], 0);
			if (number_temp < divisor) break;
		}
	}

	int answer = 1;	
	for (int i = 0; i < evenly_divisible_by_all_numbers_under; i++)
		answer *= std::max(1, (int) std::pow(i + 1, solution_set[i]));
	std::cout << answer << std::endl;
	return 0;
}
