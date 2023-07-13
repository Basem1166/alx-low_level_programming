#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_calloc - allocates memory of array
  * @nmemb : array
  * @size : size
  * Return: pointer to memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	ar = malloc(nmemb * size);
	if (!ar)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ar[i] = 0;
	return (ar);
}
