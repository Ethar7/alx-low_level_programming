#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: is an input
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i] / 2);
		}
		else
		{
			_putchar((s[i] - 1) / 2);
		}
	}
	_putchar('\n');
}
