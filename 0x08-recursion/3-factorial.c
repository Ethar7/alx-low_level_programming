#include "main.h"
/**
 * factorial - function that gives you factorial of a number
 *
 * @n: is an input value
 *
 * Return: -1 if its < 0 or its = 0 return 1
*/
int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
return (n * factorial(n -1));
}
