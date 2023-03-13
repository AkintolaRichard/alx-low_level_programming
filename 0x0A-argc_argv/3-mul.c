#include "main.h"

/**
 * main - prints the multiplication of two numbers
 * @argc: integer
 * @argv: array of string
 *
 * Return: 0 if no error, 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i); 
	return (0);
}
