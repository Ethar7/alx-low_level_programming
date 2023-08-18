#include "main.h"
/**
 * _strlen - function that return the lenght of the string
 *
 * @s: is a pointer that points to a var
 *
 * @count: counter on the string
 *
*/
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
