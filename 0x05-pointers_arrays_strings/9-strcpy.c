#include "main.h"
/**
 * *_strcpy - afunctin tha copies a string
 *
 * @src: char type string
 * @dest: char type string
 *
 * Description: function that prints string
 *
 * Return: return dest value
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}

