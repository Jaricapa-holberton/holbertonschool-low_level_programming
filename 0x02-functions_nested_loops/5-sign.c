#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * n: get a number
 * Return: return 1 if n > 0, return 0 if n = 0 and return -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
