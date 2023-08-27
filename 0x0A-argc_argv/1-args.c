#include <stdio.h>
/**
 * main - print number of arguments
 *
 * @argv: list
 * @argc: int
 *
 * Return: 0;
*/
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
