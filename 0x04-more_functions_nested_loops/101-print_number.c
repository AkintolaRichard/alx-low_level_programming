#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
	int place, remainder, num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num == 0)
	{
		_putchar(num + '0');
	}
	else if (num < 10)
	{
		_putchar((num % 10) + '0');
	}
	else
	{
		place = 10;
		while (num)
		{
			if (num / place < 10)
			{
				remainder = num;
				break;
			}
			place = place * 10;
		}
		while (place != 1)
		{
			_putchar((remainder / place) + '0');
			remainder = remainder % place;
			place = place / 10;
		}
		_putchar((remainder % 10) + '0');
	}
}
