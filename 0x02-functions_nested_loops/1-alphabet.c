#include "main.h"
/**
 * print_alphabet -  prints lowercase from a -z using _putchar
 *
*/
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
