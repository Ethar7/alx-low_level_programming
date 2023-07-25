#include "main.h"
/**
 * times_table - funtion that prints times table
 *
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
		_putchar(i * j);
			if (i * j != 3249)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
