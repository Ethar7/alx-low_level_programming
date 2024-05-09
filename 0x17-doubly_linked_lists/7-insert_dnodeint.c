#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: The index where the new node should be added, starting at 0.
 * @n: The data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *h;

	for (i = 0; current != NULL && i < idx; i++)
		current = current->next;

	if (i == idx && current != NULL)
	{
		new_node->next = current;
		new_node->prev = current->prev;
		if (current->prev != NULL)
			current->prev->next = new_node;
		current->prev = new_node;
		return (new_node);
	}
	else if (current == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
