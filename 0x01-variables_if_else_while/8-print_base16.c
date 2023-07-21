#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints a lowercase numbers of hexadecimalbase
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
	int n = 97;

	while (n <= 102)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
