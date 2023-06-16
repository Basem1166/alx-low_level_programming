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
		/* Calculate ASCII value of '0' and '9' */
		int start = '0'
			int end = '0' + 9;
				int number;

					/* Print single-digit numbers in base 10 */
					for (number = start; number <= end; number++)
							{
										putchar(number);
											}

						putchar('\n');

							return (0);
}

