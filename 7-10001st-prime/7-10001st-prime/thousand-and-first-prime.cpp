/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number? */

#include<iostream>

int isprime(long factor)
{
	if (factor % 2 == 0 && factor != 2)
		return 0; // false, not prime
	for (int i = 3; i <= std::sqrt(factor); i = i + 2)
		if (factor % i == 0)
			return 0; // false, not prime
	return 1;
}


int main()
{
	const int target_prime_count = 10001;
	long number = 1; // the incremental number that is tested to see if it is prime
	long counter = 0; // counts the number of primes encountered
	while (counter < target_prime_count)
	{
		number++;
		if (isprime(number))
			counter++;
	}
	std::cout << number << std::endl;
	return 0;
}