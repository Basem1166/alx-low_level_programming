#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - concates two strings
  * @s1 : first string
  * @s2 : second string
  * Return: pointer to concated string
  */

char *str_concat(char *s1, char *s2)
{
	int length;
	char *ar;
	int i;
	int j = 0;

	if (!s1)
		s1 = "";
	if(!s2)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		length++;
	for (i = 0; s2[i] != '\0'; i++)
		length++;
	ar = (char *)malloc(length * sizeof(char) + 1);

	if (ar)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			ar[i] = s1[i];
			j++;
		}
		for (i = 0; s2[i] != '\0'; i++)
		{
			ar[j] = s2[i];
			j++;
		}
	}
	if (!ar)
		return (NULL);
	ar[length] = '\0';
	return (ar);
}
