#include "main.h"
/**
 * *_strncat - function returns concat with n size of src 
 *
 * @src: source
 * @dest:string
 *
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int c = 0, i;

	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != NULL; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
		
