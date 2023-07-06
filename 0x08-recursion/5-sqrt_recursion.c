#include "main.h"
/**
 * sqrt_recursive - Recursive helper function to calculate the square root
 * @n: The number to calculate the square root of
 * @i: The current value to check
 *
 * Return: The square root of the number if it has a natural square root,
 *         otherwise -1
 */
int sqrt_recursive(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursive(n, i + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The square root of the number if it has a natural square root,
 *         otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_recursive(n, 1));
}

