#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entery point
 *
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		while (c = argv[argc])
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
