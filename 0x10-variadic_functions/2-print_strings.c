#include "variadic_functions.h"
/**
 * print_strings - Print strings, followed by a new line.
 * @separator: get a string to be printed between the strings.
 * @n: get the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char*);

		if (!s)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
			if (i != (n - 1) && separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(strings);
}
