#include "main.h"
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
		return (NULL);

	return (m);
}
