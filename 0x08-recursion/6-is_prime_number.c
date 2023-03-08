#include "main.h"

int prime_number(int, int);
/**
 * is_prime_number - checks if an integer is a prime number
 * @n: integer
 *
 * Return: 1 if n is a prime number and 0 if otherwise
 */
int is_prime_number(int n)
{
	return (prime_number(n, n - 1));
}

/**
 * prime_number - a helper function that performs the operation of checking
 * if a number is a prime number or not
 * @num: integer
 * @start: integer
 *
 * Return: 1 if num is a prime and 0 if otherwise
 */
int prime_number(int num, int start)
{
	if (start == 0)
		return (1);
	if (num % start == 0)
		return (0);
	return (prime_number(num, start - 1));
}
