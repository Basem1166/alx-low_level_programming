#include "function_pointers.h"
/**
  * print_name - prints name
  * @name : name
  * @f : func
  */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	(*f)(name);
}
