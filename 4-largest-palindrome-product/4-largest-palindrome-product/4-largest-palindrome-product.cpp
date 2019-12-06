/*
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <string>

int ispalindrome(int product)
{
	std::string number = std::to_string(product);
	int string_len = number.length();
	for (int i = 0; i < string_len / 2; i++)
		if (number[i] != number[string_len - 1 - i])
			return 0;
	return 1;
}

int main()
{
	int largest_palindrome = 0;
	for (int i = 100; i < 1000; i++)
		for (int j = i; j < 1000; j++)
			if (ispalindrome(i * j) && largest_palindrome < (i * j))
				largest_palindrome = i * j;
	std::cout << largest_palindrome << std::endl;
	return 0;
}