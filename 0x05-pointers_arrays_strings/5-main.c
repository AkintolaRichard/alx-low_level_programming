#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_strings(s);
	printf("%s\n", s);
	return (0);
}
