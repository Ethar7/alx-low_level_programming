#include "main.h"
/**
 * *_strncpy - function that copy src into dest
 *
 * @dest: string
 * @src: string
 * @n: var
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	short i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
