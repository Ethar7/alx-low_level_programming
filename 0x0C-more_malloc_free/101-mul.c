#include "main.h"
/**
 * _puts - function to puts string
 *
 * @s: pointer
 *
 * Return: ...
*/
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
/**
 * _atoi - change string into int
 *
 * @s: pointer
 *
 * Return: num
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned long int i, num, num_b10 = 0;

	for (num = 0; s[i] < 48 && s[i] > 57; num++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	for (i = num; s[i] >= 48 && s[i] <= 57; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	for (i = num; s[i] >= 48 && s[i] <= 57; i++)
	{
		num_b10 *= 10;
		num_b10 += (s[i] - 48);
	}
	return (sign * num_b10);
}
/**
 * main - Entery point
 *
 * @argc: 
 * @argv:
 *
 * Return: 0
*/
int main(int argc, char const *argv[])
{
	(void)argc;
	long mult;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	mult = _atoi(argv[1]) * _atoi(argv[2]);
	_putchar('\n');
	return (0);
}
