#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *strdup - creates an array of char
  * @str : string
  * Return: pointer to array
  */

char *_strdup(char *str)
{
	char *ar;
	int i;
	int length;

	for (i = 0;i != '\0'; i++)
		length++;

	ar = (char *)malloc(sizeof(char) * length);
	if (ar)
	{
		*ar = *str;	
	}

	if (!ar)
		return (NULL);
	return (ar);
}
