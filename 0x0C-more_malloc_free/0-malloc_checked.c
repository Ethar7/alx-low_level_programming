#include "main.h"
/**
 * malloc_checked - malloc checks that memory allocated or not
 *
 * @b: int
 *
 * Return: pointer
*/


void *malloc_checked(unsigned int b)
{
	int *ptr;

	*ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
