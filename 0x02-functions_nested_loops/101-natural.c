/**
 * main - Entery point
 *
 * Description: calculates all natural num less than 1024
 *
 * Return: Always 0 success
*/
#include "main.h"
int main(void)
{
	int i;

	for (i = 3; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
		printf("%d", i);
			if (i != 1023)
			{
			printf(",");
			}
		}
	}
	_putchar ('\n');
	return (0);
}

