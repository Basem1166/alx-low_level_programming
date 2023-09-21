#include "lists.h"

/**
 * dlistint_len - counts all elements
 * @h: header
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
