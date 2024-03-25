#include "main.h"
/**
 * _strlen_recursion - function that gives string length
 *
 * @s: pointer to string
 *
 * Return: int
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
/**
 * compare - compare each character of string
 *
 * @s: string
 * @n1: smallest itrator
 * @n2: biggest itrator
 *
 * Return: ...
*/
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
return (0);
}
/**
 * is_palindrome - detects if str is palin
 *
 * @s: string
 *
 * Return: 1 else 0
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
return (compare(s, 0, _strlen_recursion(s) - 1));
}
