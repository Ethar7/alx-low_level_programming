#include "main.h"
/**
 * print_sign - checks if number is postive ,negative or 0
 *
 * @n: checks input of a function
 *
 * Return: return 0,1or -1
 *
*/
int print_sign(int n)
{

	if (n <= -1)
	{
	_putchar('-');
	return (-1);
	}
	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}
	else if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	return (0);
}
