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
	char *a = haystack;

	for (; *haystack != '\0'; haystack++)
	{
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
