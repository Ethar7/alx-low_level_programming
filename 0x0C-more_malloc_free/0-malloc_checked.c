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
	int *ptr = malloc(b);
	if (ptr == 0)
		exit(98);
	return (ptr);
}
