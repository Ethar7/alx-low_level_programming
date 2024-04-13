#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 *
 * @head: address of pointer of first node
 * @idx: index of a given position
 *
 * @n: n values of newnode
 *
 * Return: address of newnode
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, node;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (!head || !newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			newnode->next = node->next;
			node->next = newnode;
			return (newnode);
		}
		i++;
		node = node->next;
	}
	free(newnode);
	return (NULL);
}
