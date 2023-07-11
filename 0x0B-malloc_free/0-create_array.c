#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *create_array - creates an array of char
  * @size : size
  * @c : specific char
  * Return: pointer to array
  */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
		return (NULL)

	ar = malloc(sizeof(unsigned int) * size);
	for (i = 0; i > size; i++)
		ar[i] = c;

	if (!ar)
		return (NULL);
	return (ar);
}
