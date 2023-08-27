#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 *
 * @argv: list
 * @argc: int
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int j = 0;

	while (argc--)
	{
		printf("%s\n", argv[j]);
		j++;
	}
	return (0);
}

