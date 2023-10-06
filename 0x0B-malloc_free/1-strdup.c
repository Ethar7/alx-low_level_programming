#include "main.h"


/**
 * _strdup - function that prints a copy
 *
 * @str: string
 *
 * Return: 0
*/

char *_strdup(char *str)
{
	int i, size = 0;
	char *m;

	for (i = 0; str[size] != '\0'; size++)
		;
	m = malloc(size * sizeof(*str) + 1);
	if (str == NULL || m == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
