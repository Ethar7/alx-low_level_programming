#include "main.h"
/**
 * print_times_table - function that prints times table with n numbers
 *
 * @n: is an input
*/
void print_times_table(int n)
{
	int p, i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			p = i * j;
			_putchar(48);
			for (j = 1; j < n; j++)
			{
				_putchar(',');
				_putchar(' ');
					if (p <= 9)
					{
						_putchar(' ');
						_putchar(p + 48);
					}
					else if (p >= 10 && p <= 99)
					{
						_putchar(' ');
						_putchar(p / 10 + 48);
						_putchar(p % 10 + 48);
					}
					else if (p >= 100)
					{
						_putchar(p / 100 + 48);
						_putchar(p / 10 + 48);
						_putchar(p % 10 + 48);
					}
			}
			_putchar('\n');
		}
	}
}
