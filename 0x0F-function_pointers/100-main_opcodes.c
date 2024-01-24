#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own function
 * @argc: argument count integer
 * @argv: 2 dimensional array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *mem;
	int i, argvalue;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	mem = (char *)&main;
	argvalue = atoi(argv[1]);
	for (i = 0; i < argvalue - 1; i++)
		printf("%02hhx ", mem[i]);
	printf("%02hhx\n", mem[i]);
	return (0);
}
