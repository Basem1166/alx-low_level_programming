#include "main.h"

/**
 * _puts_recursion - prints the stringrecursively
 *@s : string to be printed
 */
void _puts_recursion(char *s)
{
	_putchar(s);
	if ((s + 1))
		_puts_recursion(s + 1);
}