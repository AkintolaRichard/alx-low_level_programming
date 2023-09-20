#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: unsigned int, number of string passed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *arg;
	char *sep = "";
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, char *);
		if (i)
		{
			if (separator)
				printf("%s", separator);
			else
				printf("%s", sep);
		}
		if (arg)
			printf("%s", arg);
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(ap);
}
