#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: Number of arguments.
 * Return: a number as result.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
