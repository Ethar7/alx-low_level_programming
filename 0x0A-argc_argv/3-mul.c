#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0 otherwise 1
*/
int main(int argc, char *argv[])
{
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n",sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
