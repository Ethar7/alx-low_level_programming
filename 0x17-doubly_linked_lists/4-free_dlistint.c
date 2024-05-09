#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: The head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head) 
{
	dlistint_t *current = head, *current;

	while (current != NULL) 
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
