#include "main.h"
/**
 * swap_int - function that swap two numbers
 *
 * @a: is an input
 * @b: is an input
*/
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
