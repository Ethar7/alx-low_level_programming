#include "main.h"
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: function that prints  _putchar
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char arr[] = "_putchar";

	for (int i = 0 ; i < 8 ; i++)
	{

		_putchar(arr[i]);
	}
	_putchar('\n');
	return (0);
}
