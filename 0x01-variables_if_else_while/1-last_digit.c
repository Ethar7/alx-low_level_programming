#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: function that prints last digit
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int n, x;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of%u is%u and is greater than 5\n", n, x);
	}
	return (0);
}
