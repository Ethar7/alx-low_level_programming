#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: function that prints alphapet lower and upper
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char n = 'a';
char x = 'A';
	while (n <= 'z')
	{
	putchar(n);
	n++;
	}
	while (x <= 'Z')
	{
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}
