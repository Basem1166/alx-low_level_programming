#include "main.h"
/**
 * is_prime_recursive - Checks if a number is a prime number recursively
 * @n: The number to be checked
 * @divisor: The divisor to check against
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
	if (n < 2)
		return (0);

	if (divisor == 1)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}

