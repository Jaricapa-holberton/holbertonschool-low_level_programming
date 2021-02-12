#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: get a number
 * Return: return void
 */
void print_diagonal(int n)
{
	int b, c;

	for (c = 0; c <= n; c++)
	{
		if (n > 0)
		{
			for (b = 0; b < c; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
		}
		_putchar('\n');
	}
}
