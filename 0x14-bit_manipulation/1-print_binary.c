#include "main.h"
/**
 * print_binary - prints anum
 *
 * @n: the num to print
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		unsigned long int mask = 1L << --bit;
		
		if (n & mask)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');

	}
	if (!printed)
		_putchar('0');
}
