#include "variadic_functions.h"
/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: get a number of arguments.
 * Return: Returns a number as result.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;

	if (n != 0)
	{
		va_start(nums, n);

		/* calculation */
		unsigned int i, sum;

		for (i = 0; i < n; i++)
		{
			sum += va_arg(nums, int);
		}
		va_end(nums);
		return (sum);
	}
	else
	{
		return (0);
	}
}
