#include "main.h"
/**
 * *_strstr - function that locates a substring
 *
 * @haystack: main string
 * @needle: string copied
 *
 * Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack, *b;

	for (; *haystack != '\0'; haystack++)
	{
		*b = needle;
		while (*b == *a && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return ('\0');
}
