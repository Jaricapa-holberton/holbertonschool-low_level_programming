#include "holberton.h"
/**
 * recorrer - check the code for Holberton School students.
 * @n: get a number
 * @x: get a number
 * Return: 0 if false or 1 if true.
 */
int recorrer(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 4)
	{
		return (0);
	}
	if (x >= n / 2)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (recorrer(n, x + 1));
	}
	return (1);
}
/**
 * is_prime_number - look if a number is prime
 * @n: get a number
 * Return: return a number
 */
int is_prime_number(int n)
{
	return (recorrer(n, 2));
}
