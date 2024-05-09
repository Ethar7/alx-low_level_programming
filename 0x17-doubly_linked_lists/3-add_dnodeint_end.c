#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * @head: A double pointer to the head of the doubly list.
 * @n: The integer value for the new node.
 *
 * Return: The address of the new element, or NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *current = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return new_node;
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->prev = current;
	return new_node;
}

