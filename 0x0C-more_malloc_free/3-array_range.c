#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *array_range - creates array with range
  * @min : minimum val
  * @max : max val
  * Return: pointer to array
  */

int *array_range(int min, int max)
{
	int *ar;
	int i;
	int length = 0;

	if (min > max)
		return (NULL);
	ar = malloc((max - min + 1) * sizeof(int));
	if (!ar)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ar[length] = i;
		length++;
	}
	return (ar);
}
