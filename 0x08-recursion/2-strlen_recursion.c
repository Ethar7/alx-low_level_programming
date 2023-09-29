#include "main.h"


/**
 * int _strlen_recursion - function that gives string length
 *
 * @s: pointer to string
 *
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int c = 0;

	if (s != '\0')
	{
		c += _strlen_recursion(s + 1) + 1;
	}
	return (c);
}

