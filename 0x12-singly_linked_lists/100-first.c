#include "lists.h"

/**
 * first - prints before the main function executes
 *
 * Return: 0
 */
__attribute__((constructor))
int first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
