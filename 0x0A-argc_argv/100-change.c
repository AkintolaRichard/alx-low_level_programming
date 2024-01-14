#include "main.h"

/**
 * main - prints the minimum number of coins to make for an amount of money
 * @argc: integer
 * @argv: array
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int count, i, num;
	int denom[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (num == 0)
		{
			break;
		}
		else if ((num / denom[i]) > 0)
		{
			count += num / denom[i];
			num = num % denom[i];
		}
	}
	printf("%d\n", count);
	return (0);
}
