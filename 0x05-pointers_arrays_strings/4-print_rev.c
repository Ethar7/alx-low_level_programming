#include "main.h"
/**
 * print_rev - reverse the string
 *
 * @s: is a pointer that points to char
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
