#include "main.h"

int starting(unsigned long int n);

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	int count;
	int len, andmask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	len = starting(n);
	for (count = len; count >= 0; count--)
	{
		andmask = 1 << count;
		(n & andmask) == 0 ? _putchar('0') : _putchar('1');
	}
}
/**
 * starting - checks the position of the first non zero bit
 * @n: unsigned long int
 * Return: int
 */
int starting(unsigned long int n)
{
	int i, andmask, k;

	for (i = (sizeof(int) * 8) - 1; i >= 0; i--)
	{
		andmask = 1 << i;
		k = n & andmask;
		if (k != 0)
			break;
	}
	return (i);
}
