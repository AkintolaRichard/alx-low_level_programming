#include "3-calc.h"

/**
 * main - test the simple calculator
 * @argc: number of arguements
 * @argv: argument values
 *
 * Return: status code
 */
int main(int argc, char *argv[])
{
	char *op;
	int first, second, ans;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	first = atoi(argv[1]);
	second = atoi(argv[3]);
	op = argv[2];
	if (!(
		*op == '+' ||
		*op == '-' ||
		*op == '/' ||
		*op == '*' ||
		*op == '%'
		) || strlen(op) != 1)
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '%' || *op == '/') && second == 0)
	{
		printf("Error\n");
		return (100);
	}
	f = get_op_func(op);
	ans = f(first, second);
	printf("%d\n", ans);
	return (0);
}
