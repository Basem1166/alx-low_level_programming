#include "lists.h"

/**
 * get_dnodeint_at_index - gets value at index
 * @head: header
 * @index: index
 * Return: node if found, NULL otherwise
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		count++;
	}
	return (head);

}
