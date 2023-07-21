#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints numbers 1-9 followed by ,
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
	if (x != 57)
	{
		putchar(',');
		putchar(' ');
	}
	x++;
	}
	putchar('\n');
	return (0);
}
