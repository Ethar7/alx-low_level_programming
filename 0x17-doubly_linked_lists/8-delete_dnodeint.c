#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *node_to_delete;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	node_to_delete = current->next;
	current->next = node_to_delete->next;

	if (node_to_delete->next != NULL)
	{
		node_to_delete->next->prev = current;
	}
	free(node_to_delete);
	return (1);
}
