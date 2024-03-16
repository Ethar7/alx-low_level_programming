#include "main.h"
/**
 * *leet - function that encodes a string
 *
 * @a: var
 *
 * Return: a
*/
char *leet(char *a)
{
	int i;
	char arr[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	char *ap = a;

	while (*a)
	{
		for (i = 0; i < 5; i++)
		{
			if (*a == arr[i] || *a == arr[i] + 32)
			{
				*a = value[i] + 48;
			}
		}
		a++;
	}
	return (ap);
}
