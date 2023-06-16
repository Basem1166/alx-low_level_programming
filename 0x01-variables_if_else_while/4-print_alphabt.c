#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: Prints the alphabet in lowercase excluding 'q' and 'e'
 *     *
 *      * Return: Always 0 (Success)
*/
int main(void)
{
		char letter;

			/* Print alphabet excluding 'q' and 'e' */
			for (letter = 'a'; letter <= 'z'; letter++)
					{
								if (letter != 'q' && letter != 'e')
												putchar(letter);
									}

				putchar('\n');

					return (0);
}

