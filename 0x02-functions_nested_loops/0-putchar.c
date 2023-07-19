#include "main.h"
/**
 * main - Entry point
 *
 * Description: function that prints _putchar
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char arr[] = "_putchar";
	int i = 0;

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
	return (0);
}
