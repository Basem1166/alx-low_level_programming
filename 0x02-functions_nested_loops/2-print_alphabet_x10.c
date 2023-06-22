#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase, followed by a new line
 * @c: The character to be checked..
 */
void print_alphabet_x10(void)
{
	
	for(int i = 0 ; i<10 ; i++)
	{
		for (char letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	

		_putchar('\n');
	}
}

