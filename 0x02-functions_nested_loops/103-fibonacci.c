#include "main.h"
/**
 * main - Entery point
 *
 * Description: prints the even fibomicial numbers
 *
 * Return: Always return 0
*/
int main(void)
{
	unsigned long yf, x1 = 0, x2 = 1;
	float s;

	while (1)
	{
		yf = x1 + x2;
		if (yf > 4000000)
		{
			break;
		}
		else if ((yf % 2) == 0)
		{
			s += yf;
		}
		x1 = x2;
		x2 = yf;
	}
	printf ("%.0f\n", s);
	return (0);
}
