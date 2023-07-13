#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - allocates memory
  * @b : memory to be allocated
  * Return: pointer to memory
  */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m)
		return (m);
}
