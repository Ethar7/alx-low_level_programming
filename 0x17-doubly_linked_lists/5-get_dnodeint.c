#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node.
 * @head: The head of the doubly linked list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node of the list, or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
