#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - check the code
 * @argc: the number of args
 * @argv: arguments
 *
 * Return: Always0
 *
*/
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
		printf("Error\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		prinf("Error\n"), exit(2);

	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");
	return (0);
}
