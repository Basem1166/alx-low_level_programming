#include "main.h"
/** 
  * factorial - calculates the factorial
  * @n : number to be calcukated
  * Return: returns the factorial
  */

int factorial(int n)
{
	if ( n < 0 )
		return (-1);
	if ( n == 0 )
		return (1);
	return (n * factorial(n - 1));
}
