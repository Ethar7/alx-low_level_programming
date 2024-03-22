#include "main.h"
/**
 * *_memset - function
 *
 * @s: pointer 
 * @b: char that you put instead
 * @n: num of bytes
 *
 * Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ab = s;

	while (*s < n)
	{
		_putchar(b);
		s++;
	}
	return (ab);
}
