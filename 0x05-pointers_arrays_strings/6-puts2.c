#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The input string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* Print character if index is even */
		if (i % 2 == 0)
			_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}

