#include "main.h"
/**
 * reverse_array - function reverse an array
 *
 * @a: array
 * @n: size
 *
 * Return: reverse
*/
void reverse_array(int *a, int n)
{
	int i, j, x;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;
	}
}
