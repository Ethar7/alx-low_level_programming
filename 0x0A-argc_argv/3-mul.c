#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entery point
 *
 * @argc:number of command line arguments
 * @argv:arguments
 *
 * Return:0
*/


int main(int argc, char *argv[])
{
	int mult;

	if (argc == 2)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
