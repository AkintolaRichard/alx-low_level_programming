#include "variadic_functions.h"

/**
 * print_all - prints formatted string
 * @format: string
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *thestr;

	va_start(list, format);

	while (format[i])
	{
		switch(format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				thestr = va_arg(list, char *);
				if (!thestr)
					thestr = "(nil)";
				printf("%s", thestr);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(list);
}
