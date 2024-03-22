#include "main.h"
/**
 * *_memcpy - func copies string
 *
 * @dest: str copy
 * @src: str to copy
 * @n: nbytes
 *
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
