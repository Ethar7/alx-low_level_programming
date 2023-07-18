#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: function that prints num 0-9 by asscii
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
