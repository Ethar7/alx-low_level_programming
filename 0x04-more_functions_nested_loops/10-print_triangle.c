#include "main.h"
/**
 * print_triangle - print atringle with#
 *
 * @size: this is input size
*/
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			if (i + j < size)
			{
				_putchar(" ");
			}
			else
			{
				_putchar("#");
			}
		}
		_putchar("\n");
	}
}
