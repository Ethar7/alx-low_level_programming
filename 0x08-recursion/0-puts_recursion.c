#include "main.h"
/**
 * _puts_recursion - this function prints a string
 *
 * @s: is an input
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
