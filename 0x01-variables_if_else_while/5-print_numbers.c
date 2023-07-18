#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: function that prints a int num
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%u", i);
		i++;
	}
	printf("\n");
	return (0);
}
