#include "main.h"
/**
 * times_table - funtion that prints times table
 *
*/
void times_table(void)
{
	int i, j, p, z, l;

	for (i = 0; i <= 9; i++)
	{     
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			p = i * j;
			z = p / 10 ;
			l = p % 10 ;
			_putchar (',');
			_putchar (' ');
			if (p <=9)
			{
 				_putchar(' ');
				_putchar (p + 48);
			}
			else 
			{
			_putchar(z + 48);
			_putchar(l + 48);
		}	
	}
	_putchar('\n');
	}
}
