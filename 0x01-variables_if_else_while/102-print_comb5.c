#include <stdio.h>
/**
 * main - entery point
 *
 * Description: compination of two compinations
 *
 * Return: 0
*/
int main(void)
{
	int digit1 = 0, digit2;

	while (digit1 <= 99)
	{
		digit2 = 0;
		while (digit2 <= 99)
		{
			if (digit1 != digit2)
			{
				_putchar((digit1 / 10) + '0');
				_putchar((digit1 % 10) + '0');
				_putchar(' ');
				_putchar((digit2 / 10) + '0');
				_putchar((digit2 % 10) + '0');
				if (digit1 != 98 || digit2 != 99)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			digit2++;
		}
		digit1++;
	}
	_putchar('\n');
	return (0);
}

