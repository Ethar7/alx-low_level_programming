#include "main.h"
/**
 * _puts - function that prints string
 *
 * @str: is an input pointer
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 48);
		*str++;
	}
	_putchar('\n');
}