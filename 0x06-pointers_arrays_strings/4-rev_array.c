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

	for (i = 0; i < n; i++)
	{
		x = a[i];
	}
	for (j = n - 1; j > 0; j--)
	{
		a[j] = a[i];
	}
	return (a[j]);
}
