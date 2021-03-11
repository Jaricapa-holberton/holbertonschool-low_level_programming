#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: Number of arguments.
 * Return: a number as result.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	unsigned int sum = 0;

	va_start(nums, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(nums, int);
	}

	va_end(nums);
	return (sum);
}
