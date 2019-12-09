/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
**
** Find the sum of all the primes below two million. */

#include <iostream>

int isprime(long long factor)
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
	long long sum = 0;
	const int limit = 2000000;

	for (long long i = 2; i < limit; i++)
		if (isprime(i))
			sum += i;
	std::cout << sum << std::endl;
	return 0;
}