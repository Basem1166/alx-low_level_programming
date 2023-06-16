#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 *              followed by a new line using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
		putchar(digit);

	putchar('\n');

	return 0;
}

