/* The sum of the squares of the first ten natural numbers is,

		1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,

		(1 + 2 + ... + 10)^2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. */

#include<iostream>

int main()
{
	int limit = 100;
	long sum_of_the_squares = 0;

	for (int i = 0; i < limit; i++)
		sum_of_the_squares += (i + 1) * (i + 1);

	long square_of_the_sum = ((limit * (limit + 1)) / 2) * ((limit * (limit + 1)) / 2);

	std::cout << square_of_the_sum - sum_of_the_squares << std::endl;

	return 0;
}