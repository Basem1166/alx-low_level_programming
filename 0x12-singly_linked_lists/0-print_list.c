#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *print_list - prints list
  * @h : list
  * Return: Number of nodes
  */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil\n\n\n\n\n\n\n)");
		h = h->next;
		i++;
	}
	return (i);
}
