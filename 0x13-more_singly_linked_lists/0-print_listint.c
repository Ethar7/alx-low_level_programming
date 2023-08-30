#include "lists.h"
/**
 * print_listint - prints a linked lists
 *
 * @h: pointer to the first node
 *
 * Return: size of lists
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->h);
		h = h->next;
		i++;
	}
	return (i);
}