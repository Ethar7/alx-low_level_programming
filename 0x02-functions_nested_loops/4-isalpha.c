#include "main.h"
/**
 * _isalpha - is afunction checks lower or upper case charcter
 *
 * @x: checks input function
 *
 * Return: its value is 1 when itis alphapet otherwise 0
 *
*/
int _isalpha(int x)
{

	if (x >= 65 && x <= 90 || x >= 97 && x <= 122)
	{
		return (1);
	}
	return (0);
