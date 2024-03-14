#include "main.h"
/**
 * *string_toupper - function that return string low to up
 *
 * @string: string
 *
 * Return: upper
*/
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 97 && string[i] <= 122)
			string[i] = string[i] - 32;
	}
	return (string);
}
