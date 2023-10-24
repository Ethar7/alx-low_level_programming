#include "main.h"
/**
 * _memset - function used to fill memory
 *
 * @x: constant
 * @y: constant
 * @n: max byte used
 *
 * Return: pointer
*/
char *_memset(char *x, char y, unsigned int n)
{
	char *ptr = x;

	while (n--)
		*x++ = y;
	return (ptr);
}


/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: elements of array
 * @size: size
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
	{
		free(m);
		return (NULL);
	}
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
