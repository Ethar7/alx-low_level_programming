#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: writes a piece of an array
 *
 * Return: On success 1.
 */

int main(void)
{
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	return (write(1, arr, 59));
	return (1);
}
