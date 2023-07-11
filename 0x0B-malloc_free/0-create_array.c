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
	int n = size;

	if (size == 0)
		return (NULL);

	ar = (char*)malloc(sizeof(int) * size);
	for (i = 0; i < n; i++)
		ar[i] = c;

	if (!ar)
		return (NULL);
	return (ar);
	free (ar);
}
