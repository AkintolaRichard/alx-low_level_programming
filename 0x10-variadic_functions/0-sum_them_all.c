#include "variadic_functions.h"

/**
 * sum_them_all - sums the given number of arguments
 * @n: unsigned int, the number of the given argument
 *
 * Return: int, the sum of the given number of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	signed int sum;
	va_list ap;

	if (n <= 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
