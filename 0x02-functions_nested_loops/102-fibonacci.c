#include "main.h"
/**
 * main - Entery point
 *
 * Description: prints the first 50 Fibonacci numbers
 *
 * Return: Always return 0
*/
int main(void)
{
	unsigned long yf, i, x1 = 0, x2 = 1;

	for (i = 0; i < 50; i++)
	{
		yf = x1 + x2;
		printf("%lu", yf);
		x1 = x2;
		x2 = yf;
		if (i == 49)
		{
		printf("\n");
		}
		else
		{
		printf(", ");
		}
	}
	return (0);
}
