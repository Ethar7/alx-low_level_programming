#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0 otherwise 1
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; ; c++)
		{
				if (*c >= '0' || *c <= '9')
				{
					sum += atoi(argv[argc]);
				}
				else
				{
					return (printf("Error\n"), 1);
				}
		}
	}
	printf("%d\n", sum);
	return (0);
}

