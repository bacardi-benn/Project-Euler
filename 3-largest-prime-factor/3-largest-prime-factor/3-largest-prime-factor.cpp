/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <cmath>

// returns 0 (false) if factor is not prime
// returns 1 (true) if factor is prime
int isprime(long factor)
{
	if (factor % 2 == 0)
		return 0;
	for (int i = 3; i < std::sqrt(factor); i = i + 2)
		if (factor % i == 0)
			return 0;
	return 1;
}

int main()
{
	const unsigned long long number = 600851475143;
	unsigned long largest_prime_factor = 0;

	
	for (int i = 1; i < std::sqrt(number); i = i + 2)
		if (number % i == 0 && isprime(i) && largest_prime_factor < i)
			largest_prime_factor = i;

	std::cout << largest_prime_factor << std::endl;
	

	
	return 0;
}