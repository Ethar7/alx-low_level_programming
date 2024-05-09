#include "lists.h"
/**
 * print_dlistint - prints num of nodes in dlist
 *
 * @h: pointer of node
 *
 * Return: i
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
