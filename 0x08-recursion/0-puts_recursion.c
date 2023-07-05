#include "main.h"

/**
 * _puts_recursion - prints the stringrecursively
 *@s : string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	_putchar(*s);
	if ((s + 1))
		_puts_recursion(s + 1);
}
