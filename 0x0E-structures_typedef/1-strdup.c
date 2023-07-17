#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
  *_strdup - creates an array of char
  * @str : string
  * Return: pointer to array
  */

char *_strdup(char *str)
{
	char *ar;
	int i;
	int length;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	ar = (char *)malloc(sizeof(char) * length + 1);
	if (ar)
	{
		for (i = 0; str[i] != '\0'; i++)
			ar[i] = str[i];
	}

	if (!ar)
		return (NULL);
	ar[length] = '\0';
	return (ar);
}
