#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc and exit failed
 *
 * @b: int
 *
 * Return: pointer to array intialization
*/
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
