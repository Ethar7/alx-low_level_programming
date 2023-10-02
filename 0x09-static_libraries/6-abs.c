#include "main.h"
/**
 * _abs - function that make absolute of an integer
 *
 * @x: input variable
 *
 * Return: the positive value
 *
*/
int _abs(int x)
{
	if (x < 0)
		return ((-1) * x);
	return (x);
}
