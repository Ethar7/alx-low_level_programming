#include "main.h"
/**
 * print_diagonal - this function prints diagonal
 *
 * @n: is an input
*/
void print_diagonal(int n)
{
	int space, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1 ; space <= i; space++)
			{
				_putchar(' ');
			}
			_putchar('/');
			_putchar('\n');
		}
	}
}

