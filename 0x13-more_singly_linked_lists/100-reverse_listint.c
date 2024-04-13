#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: address of first node
 *
 * Return: reverse
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	if (!head || !*head)
		return (NULL);
	prev = NULL;
	current = next = *head;
	while (next)
	{
		next = next->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
