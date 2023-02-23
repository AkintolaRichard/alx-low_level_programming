#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *		       if n is greater than 15 or less than 0, the
 *		       function will not print anything.
 * @n: The inputed integer
 *
 * Return: Void.
 */
void print_times_table(int n)
{
	int i, j, ans;

	if (!(n > 15) && !(n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				ans = i * j;
				if (ans < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + ans);
					}
					else
						_putchar('0' + ans);
				}
				else if (ans >= 10 && ans < 100)
				{
					_putchar(' ');
					_putchar('0' + (ans / 10));
					_putchar('0' + (ans % 10));
				}
				else if (ans >= 100)
				{
					_putchar('0' + (ans / 100));
					_putchar('0' + ((ans % 100) / 10));
					_putchar('0' + ((ans % 100) % 10));
				}
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
