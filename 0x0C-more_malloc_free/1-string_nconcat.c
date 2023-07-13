#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *string_nconcat - concatenates two strings
  * @s1 : string one
  * @s2 : string two
  * @n : size
  * Return: pointe to string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	int count = 0;
	int i;
	unsigned int j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (j <= n)
		n = j;
	ar = malloc(i + n + 1 * sizeof(char));
	if (!ar)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ar[count] = s1[i];
		count++;
	}
	for (j = 0; j < n; j++)
	{
		ar[count] = s2[j];
		count++;
	}
	ar[count] = '\0';
	return (ar);

