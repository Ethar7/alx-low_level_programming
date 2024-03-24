#include "main.h"
/**
 * ch_prime - function checks prime
 *
 * @n: int
 * @on: int
 *
 * Return: int
*/
int ch_prime(int n, int on)
{
	if (n > 1 && on >= n)
		return (1);
	else if (n % on == 0 || n <= 1)
		return (0);
	return (ch_prime(n, on + 1));
}
/**
 * is_prime_number - function for primes
 *
 * @n: int
 *
 * Return:...
*/
int is_prime_number(int n)
{
	int ch_prime(int n, int on);
	int on = 2;

	return (ch_prime(n, on));
}
