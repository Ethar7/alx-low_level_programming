#include "main.h"
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
 * string_nconcat - string concatnate
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatnate
 *
 * Return: pointer
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int str_l1, str_l2;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 == "";

	str_l1 = string_length(s1);
	str_l2 = string_length(s2);

	ptr = malloc(s1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i =0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[i] < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	str[i] = NULL;
	return (ptr);
}

