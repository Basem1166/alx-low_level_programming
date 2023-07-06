#include "main.h"
/**
  *_pow_recursion - x raised to y
  *@x : number to be raised
  *@y : power
  *Return: answer
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
