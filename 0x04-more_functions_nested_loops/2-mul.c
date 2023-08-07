#include "main.h"
/**
 * mul - function that multiplies two numbers
 *
 * @a: is an input
 * @b: is an input
 *
 * Return: a * b
*/
int mul(int a, int b)
{
	if ((a * b) < 0)
		return (a * b);
	else
		return (-1 * (a * b));
}
