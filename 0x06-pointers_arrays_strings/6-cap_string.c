#include "main.h"
/**
 * is_lower - return lower case char
 *
 * @c: var
 *
 * Return: c
*/
int is_lower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * is_delm - function checks del
 *
 * @c: var
 *
 * Return: c
*/
int is_delm(char c)
{
	int i;
	char delmi[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delmi[i])
			return (1);
	}
	return (0);
}
/**
 * *cap_string - function return capital string
 *
 * @ptr: pointer to char
 *
 * Return: ptr
*/
char *cap_string(char *ptr)
{
	int del = 1;
	char *s = ptr;
	
	while (*ptr)
	{
		if (is_delm(*ptr))
			del = 1;
		else if (is_lower(*ptr) && del)
		{
			*ptr -= 32;
			del = 0;
		}
		else 
			del = 0;
		ptr++;
	}
	return (ptr);
}
