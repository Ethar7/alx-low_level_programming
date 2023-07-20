#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: function that prints lower case character z-a
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
