#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int row, column;

		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				int result = row * column;

				if (column != 0)
				{
					_putchar(',');
					_putchar(' ');

					if (result < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (result >= 10 && result < 100)
					{
						_putchar(' ');
					}
				}

				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}

			_putchar('\n');
		}
	}
}

