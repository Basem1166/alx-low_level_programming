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
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			prinf("[0] (nil)");
		h = h->next;
		i++;
	}
	return (i);
}
