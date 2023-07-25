#include "main.h"
/**
 * times_table - funtion that prints times table
 *
*/
void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			if (p <= 9)
			{
				_putchar(p + '0');
				if (i <= 1 && j == 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(z + '0');
				_putchar(l + '0');
				if (i >= 2 && j == 9)
				{
					_putchar(' '); 
			    
				}
				else
				{
					_putchar(',');
					_putchar(' '); 
				}
			}
		}
		_putchar('\n');
	}
}
