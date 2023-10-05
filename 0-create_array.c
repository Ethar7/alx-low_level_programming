#include "main.h"
/**
 * create_array - creats an array of char
 *
 * @size: size of array
 * @c: char
 * Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (n == 0 || size == 0)
		return (NULL);
	while (size--)
		n[size] = c;
	return (n);
}
