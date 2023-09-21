#include "variadic_functions.h"

/**
 * print_all - prints formatted string
 * @format: string
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	if (format != NULL)
	{
		va_list list;
		unsigned int i = 0;
		char *thestr;
		char *sep = "";

		va_start(list, format);

		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					thestr = va_arg(list, char *);
					if (!thestr)
						thestr = "(nil)";
					printf("%s%s", sep, thestr);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
		printf("\n");
		va_end(list);
	}
}
