#include "main.h"
/**
 * _isdigit - function that checks for a digit
 *
 * @c: input int variable
 *
 * Return: 0 or 1
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}