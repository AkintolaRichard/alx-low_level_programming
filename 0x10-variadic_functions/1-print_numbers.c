#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: string to be printed between numbers
 * @n: unsigned int, number of integers passed to the function
 *
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *sep = separator;
	va_start(ap, n);

	if (!sep)
		sep = "";
	for (i = 0; i < n; i++)
	{
		if (i)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
