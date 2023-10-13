#include "main.h"
/**
 * array_range - range of int from small to greater
 *
 * @min: min value
 * @max: max value
 *
 * Return: pointer
*/
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;
	if (min < max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(*ptr) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++; 
	return(ptr);
}

