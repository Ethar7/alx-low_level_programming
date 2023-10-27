#include "main.h"
/**
 * clear_bits - clear
 * @n: num
 * @index: index
 *
 * Return: 1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-10);
	
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
