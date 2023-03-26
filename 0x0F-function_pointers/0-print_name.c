#include "function_pointers.h"

/**
 * print_name - a function that calls another function to print
 * @name: array of character
 * @f: pointer to a function
 *
 * Return: Nothing.
 */
void print_name(char *name, (*f)(char *))
{
	f(name);
}
