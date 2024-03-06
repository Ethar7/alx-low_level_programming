#include "main.h"
/**
 * _atoi - this function converts string to an int
 *
 * @s: is apointer to character
 *
 * return: int num
*/
int _atoi(char *s)
{
        unsigned int num = 0;
        int sign = 1;

        while (*s != 0)
        {
                if (*s == '-')
                        sign *= -1;
                else if (*s >= '0' && *s <= '9')
                        num = num * 10 + *s - 48;
	}
	return (sign * num);
}
