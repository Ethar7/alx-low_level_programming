#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints a compinations of three numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n1 = 48, n2, n3;

	while (n1 <= 57)
	{
		n2 = 49;
		while (n2 <= 57)
		{
			n3 = 50;
			while (n3 <= 57)
			{
			if (n1 < n2 && n2 < n3 && n1 != n2 && n2 != n3)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
			}
			if (n1 + n2 + n3 != 168 && n1 < n2 && n2 < n3)
			{
				putchar(',');
				putchar(' ');
			}
			n3++;
			}
		n2++;
		}
	n1++;
	}
	putchar('\n');
	return (0);
}
