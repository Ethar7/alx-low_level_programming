#include "main.h"
/**
 * print_numbers - print numbers from 0 - 9
*/
void print_numbers(void)
{
	int x;

	while (x >= 48 && x <= 57)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
