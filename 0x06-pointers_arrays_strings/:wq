#include "main.h"
/**
 * *rot13 - function that rotate leters by 13
 *
 * @a: pointer
 *
 * Return: ap
*/
char *rot13(char *a)
{
	char *ap = a;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	while (*a)
	{
		for (i = 0; i < 53; i++)
		{
			if (*a == rot13[i])
			{
				*a = ROT13[i];
				break;
			}
		}
		a++;
	}
	return (ap);
}
