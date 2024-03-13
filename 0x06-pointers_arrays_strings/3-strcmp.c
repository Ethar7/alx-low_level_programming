#include "main.h"
/**
 * _strcmp - function that compare two strings
 *
<<<<<<< HEAD
 * @s1: pointer to a string
 * @s2: pointer to a string
=======
 * @s1: a string
 * @s2: a string
>>>>>>> 7593c1e6be3f7d8f8d3f9f4ed0ef3a71b2d5cc7d
 *
 * Return: x
*/
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			x = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (x);
}
