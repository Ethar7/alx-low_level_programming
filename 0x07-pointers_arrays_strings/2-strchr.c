#include "main.h"
/**
 * *_strchr - function that changes a char
 *
 * @s: pointer to a char
 * @c: char
 *
 * Return: 0
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
