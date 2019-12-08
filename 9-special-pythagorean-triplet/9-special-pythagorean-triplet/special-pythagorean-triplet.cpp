/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
	a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc. */

#include<iostream>

int get_pythagorean_triplet_c(int & a, int & b, int sum)
{
	return sum - a - b;
}

int main()
{
	
	int pythagorean_triplet_sum = 1000;
	int max_sum = 0;

	for (int a = 0; a < pythagorean_triplet_sum; a++)
		for (int b = a; b <= pythagorean_triplet_sum - a; b++)
		{
			int c = get_pythagorean_triplet_c(a, b, pythagorean_triplet_sum);
			if ((a * a + b * b) == (c * c) && a * b * c > max_sum)
				max_sum = a * b * c;
		}
	std::cout << max_sum << std::endl;
	return 0;
}