#include <stdio.h>
#include <stdlib.h>
/**
 * main - print least number of cents
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i, least_money = 0, money = atoi(argv[1]);
	int unlimeted_cents[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		for (i = 0; i < 5; i++)
		{
			if (money <= unlimeted_cents[i])
			{
				least_money += money / unlimeted_cents[i];
				money = money % unlimeted_cents[i];

				if (money % unlimeted_cents[i] == 0)
					break;
			}
		}
		printf("%d\n", least_money);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
	
