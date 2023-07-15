#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: function checks number if it is positive or negative or 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%u is positive\n",n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n",n);
	}
	else
	{
		printf("%u is zero\n",n);
	}
	return (0);
}
