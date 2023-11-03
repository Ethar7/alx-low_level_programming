#include "main.h"
/**
 * main - Entery point
 *
 * Description: print fabonancci numbers to 98
 *
 * Return: fabonancci
 *
*/
int main(void)
{
	int c;
	unsigned long fb1 = 0, fb2 = 1, sum = 0;

	for (c = 0; c < 98; c++)
	{
	sum = fb1 + fb2;
	printf("%lu", sum);
	fb1 = fb2;
	fb2 = sum;
	if (c == 97)
		printf("\n");
	else
		printf(",");
	}
	return (0);
}
