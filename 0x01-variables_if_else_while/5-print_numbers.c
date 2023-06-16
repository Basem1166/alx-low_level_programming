#include <stdio.h>

/**
   * main - Entry point
    *
     * Description: Prints single-digit numbers in base 10 starting from 0
      *
       * Return: Always 0 (Success)
*/
int main(void)
{
		int number;

			/* Print single-digit numbers in base 10 */
			for (number = 0; number <= 9; number++)
					{
								putchar(number + '0');
									}

				putchar('\n');

					return (0);
}

