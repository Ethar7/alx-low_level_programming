#include "main.h"
/**
 * print_to_98 - function that prints numbers equal to 98 ,upper or lower
 *
 * @n: is an input
 * */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for ( i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for ( i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}
