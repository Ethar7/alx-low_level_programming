#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	unsigned int i, j, str_l1 = 0, str_l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[str_l1] != '\0')
		str_l1++;
	while (s2[str_l2] != '\0')
		str_l2++;
	ptr = (char *)malloc(str_l1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

