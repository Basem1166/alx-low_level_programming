#include "lists.h"
#include <stdio>
#include <stdlib>

/**
  *print_list - prints list
  * @h : list
  * Return: Number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t i;

	while (h)
	{
		if (str)
			printf("%s", h->str);
		else
			prinf("[0] (nil)");
		i++;
	}
	return (i);
}
