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
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int i = 0, num, num_b10 = 0;

	for (num = 0; s[i] < 48 && s[i] > 57; num++)
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
 * pr_int - prints an integer
 *
 * @num: int
 *
 * Return: 0
*/

void pr_int(unsigned long int num)
{
	unsigned long int divisor = 1, i, num_;

	for (i = 0; num / divisor > 9; i++, divisor *= 10)
	;

	for (; divisor >= 1; num %= divisor, divisor /= 10)
	{
		num_ = num / divisor;
		_putchar('0' + num_);
	}
}
/**
 * main - Entery point
 *
 * @argc: int
 * @argv: arr of char
 *
 * Return: 0
*/
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		_putchar('\n');
		exit(98);
	}
	pr_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
