#include "main.h"
/**
 * _pow_recursion - this function returns the power of two numbers
 *
 * @x: is an input base
 * @y: y is the power
 *
 * Return: the power value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
