#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphapet for 10 times
 *
*/
void print_alphabet_x10(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		x = 97;
	while (x <= 122)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	}
}
