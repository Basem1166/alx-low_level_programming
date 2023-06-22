#include "main.h"

/**
 * print_square - Prints a square of a given size
 * @size: The size of the square
 * Return - 0 (Success)
 */
void print_square(int size)
{

	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			_putchar('#');
			_putchar('\n');
		}
}
