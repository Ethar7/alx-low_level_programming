#include "main.h"
/**
 * print_last_digit - function that output last value of an integer
 *
 * @x: input variable
 *
 * Return: the last digit
 *
*/
int print_last_digit(int x)
{
	int last;

	if (x < 0)
	{
		last = (-1) * (x % 10);
	}
	else
	{
		last = (x % 10);
	}
	_putchar(last + 48);
	return (last);
}
