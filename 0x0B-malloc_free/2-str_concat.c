#include "main.h"

/**
 * string_length - string length
 *
 * @s: string
 *
 * Return: size
*/
int string_length(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * str_concat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: size of two strings
*/
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i = 0;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = string_length(s1);
	size2 = string_length(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
	{
		return (NULL);
	}
		for (; i <= size1 + size2; i++)
		{
			if (i < size1)
			{
				m[i] = s1[i];
			}
			else
			{
				m[i] = s2[i - size1];
			}
		}
	m[i] = '\0';
	return (m);
}
