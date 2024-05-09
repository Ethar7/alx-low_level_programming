#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning.
 * @head: A pointer to the head of the doubly list.
 * @n: The integer value for the new node.
 *
 * Return: The address of the new element, or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	else
	{
		*head = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}
