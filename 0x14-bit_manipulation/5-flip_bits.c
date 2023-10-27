#include "main.h"
/**
 * flib_bits - return num of bits
 *
 * @n: first
 * @m: second
 *
 * Return: num
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
