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

	do {
		dest[i] = src[i];
		i++;
	}

	while (src[i] != '\0')
	return (dest);
}

