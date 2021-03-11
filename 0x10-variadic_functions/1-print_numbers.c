#include "variadic_functions.h"
/**
 * print_numbers - Print numbers, followed by a new line.
 * @separator: get a string to be printed between numbers.
 * @n: get the number of integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	int print;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		print = va_arg(nums, int);
		printf("%d", print);
		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nums);
}
