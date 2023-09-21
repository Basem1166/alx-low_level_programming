#include "lists.h"

/**
 * add_dnodeint - adds node to begginign of a list
 * @head: header
 * @n: item to be added
 * Return: address of the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *mem;

	mem = malloc(sizeof(dlistint_t));
	if (!mem)
	{
		return (NULL);
	}
	mem->n = n;
	mem->next = *head;
	mem->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = mem;
	}
	*head = mem;
	return (mem);
}
