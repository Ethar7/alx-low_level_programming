#include "main.h"
/**
 * *_memset - function that takes apointer nbytes anconst b toget b in str
 *
 * @s: pointer
 * @b: char that you put instead
 * @n: num of bytes
 *
 * Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);
}
