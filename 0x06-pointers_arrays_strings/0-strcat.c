#include "main.h"
/**
 * *_strcat - function concat two strings
 *
 * @src: main string
 * @dest: concatenated string
 *
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int c1 = 0, c2 = 0;

	while (dest[c1])
		c1++;
	while (src[c2])
	{
		dest[c1++] = src[c2];
		c2++;
	}
	return (dest);
}
