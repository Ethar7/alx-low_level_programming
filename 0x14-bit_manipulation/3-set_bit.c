#include "main.h"
/**
 * set_bit - sets the bit
 * @n: the num of index
 * @index: index
 * Return: 1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));/*بنعمل shift for 1 لحد مهيوصل للبيت اللى انت عاوز تعملها ست*/
}
