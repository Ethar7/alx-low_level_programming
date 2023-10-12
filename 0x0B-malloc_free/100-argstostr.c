#include "main.h"

/**
 * string_len - string size
 *
 * @s: pointer
 *
 * Return: size
*/
int string_len(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * argstostr - function that concatenates all the arguments
 *
 * @ac: int
 * @av: arguments
 *
 * Return: pointer
*/
char *argstostr(int ac, char **av)
{
	int x = 0, y = 0, z = 0, l = 0;
	char *ptr;

	if (ac == 0 || av == 0)
		return (NULL);

	for (; x < ac; x++, y++)
		y += string_len(av[x]);
	ptr = malloc(sizeof(char) * y + 1);

	if (ptr == 0)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (z = 0; av[x][z] != '\0'; z++, l++)
			ptr[l] = av[x][z];
		ptr[l] = '\n';
	l++;
	}
	ptr[l] = '\0';
	return (ptr);
}
