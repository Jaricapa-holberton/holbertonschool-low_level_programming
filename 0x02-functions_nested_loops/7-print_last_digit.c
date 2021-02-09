#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: get a number
 * Return: return the value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (m < 0)
	{
		_putchar((-1 * m) + '0');
		return (-1 * m);
	}
	else
	{
		_putchar((m + '0'));
		return (m);
	}
}
