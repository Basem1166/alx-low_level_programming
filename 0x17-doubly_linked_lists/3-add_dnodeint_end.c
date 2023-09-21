#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of a list
 * @head: header
 * @n: item to be added
 * Return: address of the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *mem, *last;

	mem = malloc(sizeof(dlistint_t));
	if (!mem)
	{
		return (NULL);
	}
	mem->n = n;
	mem->next = NULL;
	if (*head == NULL)
	{
		mem->prev = NULL;
		*head = mem;
		return (mem);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = mem;
	mem->prev = last;
	return (mem);
}
