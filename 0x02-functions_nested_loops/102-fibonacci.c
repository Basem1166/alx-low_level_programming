#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int limit = 50;
	unsigned long long int first = 1, second = 2;
	unsigned long long int fibonacci;
	int i;

	printf("%llu, %llu", first, second);

	for (i = 3; i <= limit; i++)
	{
		fibonacci = first + second;
		printf(", %llu", fibonacci);

		first = second;
		second = fibonacci;
	}

	printf("\n");

	return (0);
}

