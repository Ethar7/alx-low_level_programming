#include "main.h"
/**
 * get_bit - gets the bit at the index
 * @n: the num of ind
 * @index: in
 * Return: the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);/*البيت اللى هيقراها من اليمين هى دى ويسبعتبعد البيتس اللى مش عوزها*/
}
