#include "main.h"
/**
 * _strlen_recursion - this function gives the lenght of a string
 *
 * @s: is an input pointer
 *
 * Return: the lenght
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i += _strlen_recursions(s) + 1;
	}
	return (i);
}
