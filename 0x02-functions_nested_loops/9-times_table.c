#include "main.h"
/**
 * times_table - funtion that prints times table
 *
*/
void times_table(void)
{
	int i, j, pro;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			pro = i * j;
			if (pro <= 9)
			{
				_putchar(pro + '0');
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
				_putchar((pro / 10) + '0');
				_putchar((pro % 10) + '0');
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
