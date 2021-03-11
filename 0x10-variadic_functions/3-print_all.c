#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list element;
	int i;
	int indexf; /* index of array formats */
	format_t functions[] = {
		{"c", p_c},
		{"i", p_i},
		{"f", p_f},
		{"s", p_s},
		{NULL, NULL}
	};
	char *separator = "";

	va_start(element, format);

	indexf = 0;
	while (format != NULL && format[indexf] != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (*functions[i].f == format[indexf])
			{
				printf("%s", separator);
				functions[i].print(element);
				separator = ", ";
				break;
			}
			i++;
		}
		indexf++;		
	}
	printf("\n");
	va_end(element);
}

/**
 * p_c - Print with character format.
 * @element: List of elements
 */
void p_c(va_list element)
{
	printf("%c", va_arg(element, int));
	
}

/**
 * p_i - Print with integer format.
 * @element: List of elements
 */
void p_i(va_list element)
{
	printf("%d", va_arg(element, int));
	
}

/**
 * p_f - Print with float format.
 * @element: List of elements
 */
void p_f(va_list element)
{
	printf("%f", va_arg(element, double));
	
}

/**
 * p_s - Print with string format.
 * @element: List of elements
 */
void p_s(va_list element)
{
	char *str = va_arg(element, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
