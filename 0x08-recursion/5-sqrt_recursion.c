#include "main.h"
/**
 * _sqrt_recursion - function that gives square root
 *
 * @n: is an input
 * @x: is an input times
 *
 * Return: int
*/
int squares(int n, int x);
int _sqrt_recursion(int n)
{       
	return (squares((n, x)));
}       
/**
 * squares - function that gives square
 *
 * @n: is an input
 * @x: is an input times
 *
 * Return: int
*/
int squares(int n, int x)
{       
	if (n == x * x)
		return (x);
	else if (x * x < n)
		return (squares(n, x + 1));
	else
		return (-1);
}
