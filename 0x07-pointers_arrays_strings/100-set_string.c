#include "main.h"
/**
 * set_string - function that sets the value of a pointer to char
 *
 * @s: pointer to pointer
 * @to: pointer
 *
 * Return: nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
