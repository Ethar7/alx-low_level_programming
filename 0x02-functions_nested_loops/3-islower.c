#include "main.h"
/**
 * _islower - is a function that checks the lower case char
 *
 *
 * @x: checks input of funtion
 *
 *
 * Return: it returns 1 either is lower case or 0 when is not
 *
*/
int _islower(int x)
{

	if (x >= 97 && x <= 122)
	{
		return (1);
	}
	return (0);
}
