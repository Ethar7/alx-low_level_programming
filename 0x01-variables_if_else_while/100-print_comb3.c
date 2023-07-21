#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints compinaion of two digits
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int x = 48, y;

	while (x < 58)
	{
	y = 48;
		while (y < 58)
		{
		if (x != y && x < y)
		{
			putchar(x);
			putchar(y);
			if (x + y != 113)
			{
				putchar(',');
				putchar(' ');
			}
		}
		y++;
		}
		x++;
		putchar('\n');
	}
	return (0);
}
