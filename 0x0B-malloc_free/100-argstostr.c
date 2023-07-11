#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *argstostr - args to string
  * @ac : number of args
  * @av : args
  * Return: pointer to string
  */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	char *st;
	int count;

	if (!ac || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
	}
	st = (char *)malloc((count + ac ) * sizeof(char));
	if (!st)
		return (NULL);
	if (st)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				st[k] = av[i][j];
				k++;
			}
			st[k] = '\n';
			k++;
		}
	}
	st[k] = '\0';
	return (st);
}
